// Take positive integer input and tell if it is divisible by 5 and 3.
#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter Number: ";
    cin>>num;

    if(num > 0){
        if(num % 5 == 0 && num % 3 == 0){
            cout<<"Divisible by 5 and 3.";
        }
    }
    else{
        cout<<"Not divisible by 5 and 3.";
    }
}
