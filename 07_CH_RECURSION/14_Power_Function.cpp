//Logarithmic Recursion)
#include<iostream>
using namespace std;

int power(int x, int n){

    // Base case
    if(n == 0)
        return 1;

    // Recursive call
    int half = power(x, n / 2);

    // If n is even
    if(n % 2 == 0)
        return half * half;

    // If n is odd
    else
        return x * half * half;
}

int main(){
    int x, n;

    cout << "Enter base and exponent: ";
    cin >> x >> n;

    cout << "Result = " << power(x, n);

    return 0;
}