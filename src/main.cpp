// Copyright 2022 UNN-IASR
#include <iostream>
#include "fun.h"

int main() {
    const char* test1 = "hello 123 world 45 test";
    const char* test2 = "Hello world Apple banana Cat Dog123";
    const char* test3 = "one two   three four";

    std::cout << "Task 1 tests (words without digits):" << std::endl;
    std::cout << "Test 1: " << faStr1(test1) << std::endl;
    std::cout << "Test 2: " << faStr1(test2) << std::endl;
    std::cout << "Test 3: " << faStr1(test3) << std::endl;

    std::cout << "\nTask 2 tests (words starting with capital, rest lowercase):" << std::endl;
    std::cout << "Test 1: " << faStr2(test1) << std::endl;
    std::cout << "Test 2: " << faStr2(test2) << std::endl;
    std::cout << "Test 3: " << faStr2(test3) << std::endl;

    std::cout << "\nTask 3 tests (average word length):" << std::endl;
    std::cout << "Test 1: " << faStr3(test1) << std::endl;
    std::cout << "Test 2: " << faStr3(test2) << std::endl;
    std::cout << "Test 3: " << faStr3(test3) << std::endl;

    return 0;
}
