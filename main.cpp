/*
Author: Derek Ni
Course: CSCI-135
Instructor: Micheal Zamansky
Assignment: Lab 2 B

Description: Funcs.cpp, main.cpp, and funcs.h 
all connect to perform L+U
*/
#include "funcs.h"
#include <iostream>

int main() {
    int L; int U;
    std::cout << "Give first number: ", std::cin >> L;
    std::cout << "Give second number: ", std::cin >> U;
    print_interval(L,U);
}