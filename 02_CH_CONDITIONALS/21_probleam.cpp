//TAke positive integer input and tell if it is divisibole by 5 or 3 but not divisible by 15.

#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    if(num>0){
        if((num % 5 ==0 && num % 3 == 0  )|| ( num % 15 != 0) ){
            cout<<"Number is divisible by 5 and 3 both.";
        }
        else{
            cout<<"Number is not divisible by 5 and 3 .";
        }
    }
    else{
        cout<<"Please enter positive number only!";
    }
    return 0;
}