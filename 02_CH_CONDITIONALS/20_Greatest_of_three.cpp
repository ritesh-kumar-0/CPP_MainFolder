//Take  3 integer input and print the greatest of them .
#include<iostream>
using namespace std;

int main(){
    int a, b , c;

    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;

    if(a>0 && b>0 && c>0){
        if(a>b && a>c){
            cout<<"Greatest number is "<<a;
        }
        else if(b>a && b>c){
            cout<<"Greatest number is "<<b;
        }
        else{
            cout<<"Greatest number is "<<c;
        }
        
    }
    else{
        cout<<"Please enter positive integers only! ";
    }
    return 0;
}