// check character Type (Uppercase, Lowercase, Digit , Special)

#include<iostream>
using namespace std;

int main(){
    char ch;

    cout<<"Enter Character: ";
    cin>>ch;

    if(ch >= 'A' && ch <= 'Z'){
        cout<< "Uppercase Letter";
    }
    else{
        if  (ch >= 'a' && ch <= 'z'){
        cout<<" Lowercase letter";
    }
    else{
         if(ch >= '0' && ch <= '9'){
            cout<< "Digit";
         }
         else{
            cout<< "Special Character";
         }
    }
    }
    return 0;  
    
}