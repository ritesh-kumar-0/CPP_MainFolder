// WAP to print Factorial using whiole loop

#include<iostream>
using namespace std;

int main(){
    int n, i=1, fact=1;

    cout<<"Enter number: ";
    cin>>n;

    while(i<=n){
        fact = fact*i;
        i++;
    }

    cout<<"Factorial = "<<fact;
    return 0;
}