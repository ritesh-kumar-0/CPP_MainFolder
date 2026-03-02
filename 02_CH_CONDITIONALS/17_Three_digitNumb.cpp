/* Take positive integer input and tell if it is a three
digit number or not.*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter three digit number: ";
    cin>>n;

    if(n>99 && n<1000){
        cout<<"IT is Three digit Number. ";

    }
    else{
        cout<<"Not three digit number.";
    }
    return 0;
}