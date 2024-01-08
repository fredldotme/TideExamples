#include <thread>
#include <iostream>
#include <chrono>

int main(int argc, char **argv)
{
    std::cout << "Testing threads" << std::endl;

    std::thread t1([](){
        std::cout << "Sleeping for 3 seconds..." << std::endl;
        using namespace std::chrono_literals;
        std::this_thread::sleep_for(3000ms);
        std::cout << "Slept for 3 seconds!" << std::endl;
    });

    std::thread t2([](){
        std::cout << "Sleeping for 5 seconds..." << std::endl;
        using namespace std::chrono_literals;
        std::this_thread::sleep_for(5000ms);
        std::cout << "Slept for 5 seconds!" << std::endl;
    });

    t1.join();
    t2.join();

    std::cout << "Thread completed" << std::endl;
    return 0;
}