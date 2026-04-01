// Print value using pointers 

#include<iostream>
using namespace std;

int main(){
    int a = 10;

    int *p = &a;   // pointer stores address of a

    cout << "Value of a: " << a << endl;        // output = 10
    cout << "Address of a: " << &a << endl;      // output = 0x13ff878

    cout << "Pointer p stores address: " << p << endl;  // 0x13ff878

    cout << "Value using pointer (*p): " << *p << endl;  // dereferencing   ->  10

    return 0;
}