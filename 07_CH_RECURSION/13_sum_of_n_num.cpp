//Sum of 1 to N using Recursion
#include<iostream>
using namespace std;

// Function to calculate sum
int sum(int n){

    // Base case
    if(n == 0)
        return 0;

    // Recursive case
    return n + sum(n - 1);
}

int main(){
    int n;

    cout << "Enter a number: ";
    cin >> n;   // Taking user input

    cout << "Sum = " << sum(n);

    return 0;
}