/*
Author: Derek Ni
Course: CSCI-135
Instructor: Micheal Zamansky
Assignment: Lab 2 C

Description: The code prints out an array of 1s and allows the user
to input values into the given range of numbers
*/
#include <iostream>


int main () {
    int size[10]; int index; int value; int i;
    
    for (i = 0; i < 10; i++){
        size[i] = 1;
        
    }
    do {
      for (int j = 0; j < 10; j++){ 
            std::cout << size[j] << " ";
        } 
        std::cout << std::endl << "Input index: ", std::cin >> index;
        std::cout << std::endl << "Input value ", std::cin >> value;
        
        if(index > -1 && index < 10){
            size[index] = value;
        }
    }   while(index > -1 && index < 10);
        std::cout << "The given index isn't within the range.";
    
    return 0;
}