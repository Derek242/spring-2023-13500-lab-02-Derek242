/*
Author: Derek Ni
Course: CSCI-135
Instructor: Micheal Zamansky
Assignment: Lab 2 D

Description: Fibonacci numbers

Anaylsis: I see the program start to contain negative numbers
after reaching a certain point in the billions that integers 
can't store.
*/

#include <iostream>

int main() {
    int fib[60];
    fib[0] = 0;
    fib[1] = 1;
    
    for (int i = 2; i < 60; i++){
        fib[i] = fib[i-1] + fib[i-2];
        std::cout << fib[i] << std::endl;
    } 
    
    return 0;
}