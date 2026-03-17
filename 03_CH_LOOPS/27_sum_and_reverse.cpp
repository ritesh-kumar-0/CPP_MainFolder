// WAP to print the sum of given numbers and its reverse.

#include<iostream>
using namespace std;

int main(){
    int num, sum = 0,rem, rev = 0;

    cout<<"Enter Number:";
    cin>>num;

 int original = num;

    // Step 1: Find sum of digits
    while(num > 0) {
        rem = num % 10;   // last digit
        sum = sum + rem;
        num = num / 10;     // remove last digit
    }

    // Step 2: Reverse the sum
    int temp = sum;
    while(temp > 0) {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }

    cout << "Sum of digits = " << sum << endl;
    cout << "Reverse of sum = " << rev << endl;

    return 0;
}   
    
