// Find ASCII difference between two characters (Input A or a)

#include<iostream>
using namespace std;

int main(){
    char ch1, ch2;
// TAking user input 
    cout<<"Enter first character: ";
    cin >> ch1;

    cout<<"Enter second character: ";
    cin>>ch2;

    int difference = (int)ch1 - (int)ch2;  // Typecasting char to int to get ASCII value

    // Display ASCII values of both characters
    cout << "ASCII value of " << ch1 << " = " << (int)ch1 << endl;
    cout << "ASCII value of " << ch2 << " = " << (int)ch2 << endl;

    cout << "ASCII Difference = " << difference << endl;

    return 0;

}