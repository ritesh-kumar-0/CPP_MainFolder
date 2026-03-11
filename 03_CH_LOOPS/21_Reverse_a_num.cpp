// WAP to Reverse a Number.

#include<iostream>
using namespace std;

int main(){
    int n, rev=0;

    cout<<"Enter Number: ";
    cin>>n;

    while(n > 0){
        int digit = n % 10;
        rev = rev*10 + digit;
        n = n/10;
    }

    cout<<"Reverse = "<<rev;
    return 0;
}