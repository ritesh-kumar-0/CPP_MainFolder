/*Combination:  Combination means selection of objects
 without considering order(Order does NOT matter).*/  

 #include <iostream>
using namespace std;

// Function to calculate factorial
int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {
    int n, r;

    cout << "Enter value of n: ";
    cin >> n;

    cout << "Enter value of r: ";
    cin >> r;

    int nCr = factorial(n) / (factorial(r) * factorial(n - r));  // function call

    cout << "nCr (Combination) = " << nCr;

    return 0;
}