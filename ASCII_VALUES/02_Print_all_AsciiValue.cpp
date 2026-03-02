//Write a program to print all ASCII values from 0 to 127.
#include<iostream>
using namespace std;

int main() {

    cout << "ASCII Value\tCharacter" << endl;
    cout << "-----------------------------" << endl;

    for(int i = 0; i <= 127; i++) {
        cout << i << "\t\t" << (char)i << endl;
    }

    return 0;
}