//Sum and Reverse of Numbers
#include<iostream>
using namespace std;

int main() {
    int num, ld;
    int sum = 0, reverse = 0;

    cout << "Enter a number: ";
    cin >> num;

    while(num > 0) {
        ld = num % 10;              // last digit
        sum = sum + ld;           // sum of digits
        reverse = reverse * 10 + ld; // reverse number
        num = num / 10;                // remove last digit
    }

    cout << "Sum of digits = " << sum << endl;
    cout << "Reverse number = " << reverse << endl;

    return 0;
}