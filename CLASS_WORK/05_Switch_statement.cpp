/* Write a program to create a calculator that performs basic arithmetic operations(Add,
subtract, multiply and divide) using switch case . the calculator should input two number 
and an operator from user*/
#include<iostream>
using namespace std;

int main() {

    double num1, num2;   // Variables for numbers
    char op;             // Variable for operator

    // Taking input from user
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    // Switch case 
    switch(op) {

        case '+':
            cout << "Result = " << num1 + num2;
            break;

        case '-':
            cout << "Result = " << num1 - num2;
            break;

        case '*':
            cout << "Result = " << num1 * num2;
            break;

        case '/':
            if(num2 != 0)
                cout << "Result = " << num1 / num2;
            else
                cout << "Error! Division by zero is not allowed.";
            break;

        default:
            cout << "Invalid Operator!";
    }

    return 0;
}