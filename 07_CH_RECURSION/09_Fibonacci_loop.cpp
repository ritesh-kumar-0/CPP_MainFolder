// Using Loop 
#include<iostream>
using namespace std;

int main() {
    int n, a = 0, b = 1, next;

    cout << "Enter number of terms: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cout << a << " ";
        next = a + b; // next term
        a = b;
        b = next;
    }
    return 0;
}