//Take integer input and print the absolute value of that integer.
#include<iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter an integer: ";
    cin >> num;

    if(num < 0) {
        num = -num;   // convert negative to positive
    }

    cout << "Absolute value is: " << num;

    return 0;
}