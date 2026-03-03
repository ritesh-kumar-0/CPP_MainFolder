// Calculator using If-else 

#include<iostream>
using namespace std;

int main() {

    double num1, num2;   // Variables to store numbers
    char op;             // Variable to store operator

    // Taking input
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    // Using if-else to perform operations
    if(op == '+') {
        cout << "Result = " << num1 + num2;
    }
    else if(op == '-') {
        cout << "Result = " << num1 - num2;
    }
    else if(op == '*') {
        cout << "Result = " << num1 * num2;
    }
    else if(op == '/') {

        // Check division by zero
        if(num2 != 0)
            cout << "Result = " << num1 / num2;
        else
            cout << "Error!! Division by zero is not allowed.";
    }
    else {
        cout << "Invalid Operator!!";
    }

    return 0;
}