// Print GP up to n Terms
#include<iostream>
using namespace std;

int main() {

    int n;
    int term = 2;   // first term
    int r = 3;      // common ratio

    cout << "Enter number of terms: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        cout << term << " ";
        term = term * r;
    }

    return 0;
}