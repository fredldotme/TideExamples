/**
 * C++ memory reading performance test.
 *
 * This snippet is used to test the performance differences between a forward,
 * backward and random array accessing.
 *
 * The random access memory is a biased test but was interesting test to do
 *anyway.
 *
 * The execution of this code may time a while depending on your CPU
 *
 * Compilation command: gcc read_memory_test.cpp -lstdc++ -ggdb -O3 -o prog
 *
 * Results on my machine:
 *		Forward sum result: 711575312, tooks: 0.600869
 *		Reverse sum result: 711575312, tooks: 0.603795
 *		Random sum result: 2015523973, tooks: 74.208674
 *
 * @author Andrea Catania
 */

#include <chrono>
#include <iostream>
#include <stdio.h>
#include <string>

int main(int argc, char **argv) {

  std::cout << "Begin" << std::endl;

  unsigned int arr_size = 1000;
  unsigned int iterations = 10000;

  unsigned int numbers_forw[arr_size];
  unsigned int numbers_rev[arr_size];

  unsigned int sum_forward = 0;
  unsigned int sum_reverse = 0;
  unsigned int sum_random = 0;

  std::chrono::duration<double> sum_forward_ex_time;
  std::chrono::duration<double> sum_reverse_ex_time;
  std::chrono::duration<double> sum_random_ex_time;

  std::cout << "Prepare first array." << std::endl;
  for (unsigned int i = 0; i < arr_size; ++i) {
    numbers_forw[i] = rand();
  }

  std::cout << "Prepare second array." << std::endl;
  for (unsigned int i = 0; i < arr_size; ++i) {
    numbers_rev[i] = rand();
  }

  { // Forward
    std::cout << "Test forward access" << std::endl;
    auto start = std::chrono::high_resolution_clock::now();
    for (int x = 0; x < iterations; x++)
      for (unsigned int i = 0; i < arr_size; ++i) {
        sum_forward += numbers_forw[i] + numbers_rev[i];
      }
    sum_forward_ex_time = std::chrono::high_resolution_clock::now() - start;
  }

  { // Reverse access
    std::cout << "Test reverse access" << std::endl;
    auto start = std::chrono::high_resolution_clock::now();
    for (int x = 0; x < iterations; x++)
      for (int i = arr_size - 1; i >= 0; --i) {
        sum_reverse += numbers_forw[i] + numbers_rev[i];
      }
    sum_reverse_ex_time = std::chrono::high_resolution_clock::now() - start;
  }

  { // Random access
    std::cout << "Test random access" << std::endl;
    auto start = std::chrono::high_resolution_clock::now();
    for (int x = 0; x < iterations; x++)
      for (unsigned int i = 0; i < arr_size; ++i) {
        const int p(rand() % arr_size);
        sum_random += numbers_forw[p] + numbers_rev[p];
      }
    sum_random_ex_time = std::chrono::high_resolution_clock::now() - start;
  }

  printf("Forward sum result: %i, tooks: %.6f\n", sum_forward,
         sum_forward_ex_time.count());
  printf("Reverse sum result: %i, tooks: %.6f\n", sum_reverse,
         sum_reverse_ex_time.count());
  printf("Random sum result: %i, tooks: %.6f\n", sum_random,
         sum_random_ex_time.count());

  return 0;
}