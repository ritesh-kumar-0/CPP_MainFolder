#include<iostream>
using namespace std;

// 1. No argument, no return
void hello() {
    cout << "Hello!" << endl;
}

// 2. Argument, no return
void printSum(int a, int b) {
    cout << a + b << endl;
}

// 3. No argument, return
int getNumber() {
    return 10;
}

// 4. Argument + return
int add(int a, int b) {
    return a + b;
}

int main() {
    hello();                // call 1

    printSum(5, 3);         // call 2

    cout << getNumber() << endl;   // call 3

    cout << add(4, 6);      // call 4

    return 0;
}