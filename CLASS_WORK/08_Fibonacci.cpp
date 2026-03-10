// Fibonacii Numbers 

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Numbers of Terms: ";
    cin>>n;

    int a = 0, b = 1;   // First two Fibonacci numbers
    for(int i = 1; i <= n; i++){
        cout<< a << "  ";  // Print current Fibonacci number

        int next = a+b;
        a = b;   // Shift second number to first
        b = next;  // Store next number as new second number
    
    }
    return 0;
}