#include <iostream>

int main(int argc, char* argv[]) {
    std::cout << "int: " << sizeof(int) << std::endl;
    std::cout << "short: " << sizeof(short) << std::endl;
    std::cout << "long: " << sizeof(long) << std::endl;
    std::cout << "char: " << sizeof(char) << std::endl;
    std::cout << "char*: " << sizeof(char*) << std::endl;
    return 0;
}