#include<iostream>
using namespace std;

int main() {
    int num, sum = 0, rem, rev = 0;

    cout << "Enter Number: ";
    cin >> num;

    // Step 1: Sum of digits
    for(int n = num; n > 0; n = n / 10) {
        rem = n % 10;
        sum = sum + rem;
    }

    // Step 2: Reverse of sum
    for(int temp = sum; temp > 0; temp = temp / 10) {
        rem = temp % 10;
        rev = rev * 10 + rem;
    }

    cout << "Sum of digits = " << sum << endl;
    cout << "Reverse of sum = " << rev << endl;

    return 0;
}