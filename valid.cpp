/*
Author: Derek Ni
Course: CSCI-135
Instructor: Micheal Zamansky
Assignment: Lab 2 A

Description: My program asks the user for a input in between 1 and 99 and 
will print out the number squared. If the number isnt from 1-99, then it will keep asking
for said number.
*/
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Please enter an integer: ", cin >> num;
    while (num > 99 || num < 1 ) {
        cout << "Please re-enter: ", cin >> num;
    }

    if (num < 100 && num > 0){
        cout << "Number squared is: " << num*num;
    }

} 

