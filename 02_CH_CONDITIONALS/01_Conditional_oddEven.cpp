// Conditionals -  Take positive integer input and tell if it is even or odd


#include<iostream>
using namespace std;

int main(){
    int num;

    cout<<"Enter Number: ";
    cin>>num;

    if(num % 2 == 0){
        cout<<"Even number";

    }
    else{
        cout<<"Odd Number";
    }
    return 0;


}