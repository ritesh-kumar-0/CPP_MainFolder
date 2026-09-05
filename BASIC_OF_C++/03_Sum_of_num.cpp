//WAP to take Two integers as input and print their sum.

#include<iostream>   // include input output stream library

using namespace std;  // Use standard namespace

int main(){  // Main Function

    int num1, num2, sum;   // Declare three integer variables
    
    cout << "Enter First Number: ";  // Ask user to enter first number
    cin >> num1;                     // Take first number as input

    cout << "Enter second Number: "; // Ask user to enter second number 
    cin >> num2;                     // Take second number as input 

    sum = num1+num2;  // calculate the sum of two numbers 

    cout << "Sum of these two number be " << sum;   // Display the sum

    return 0;



}