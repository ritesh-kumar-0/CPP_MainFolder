//Take positive integer input and tell if it is divisible by 5 or not 
#include<iostream>
using namespace std;

int main(){
    int num;

    cout<<"Enter number: ";
    cin>>num;

    if(num > 0){
        if(num % 5 ==0){
            cout<<num<<" is divisible by 5.";

        }
        else{
            cout<<num<<"is not divisible by 5.";
        }
    }
    else{
        cout<<"Please enter a positive integer only!";
    }
    return 0;
}