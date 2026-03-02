// Find Largest of three Numbers using Nested if.

#include<iostream>
using namespace std;

int main(){
    int a , b, c;
    cout<<"Enter three numbers : ";
    cin>>a>>b>>c;
//a>b and a>c -> a>c -> a largest
    if(a>b){ // b can never be the greatest
        if(a>c){
            cout<<a<<" is largest";
        }
        else{
            cout<<c<<" is largest";
        }

    }
    else{
        if(b>c){
            cout<<b<<" is largest";
        }
        else{
            cout<<c<<" is largest";
        }
    }
    return 0;
}