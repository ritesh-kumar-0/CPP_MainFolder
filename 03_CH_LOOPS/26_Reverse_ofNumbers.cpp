// WAP to print reverse of a numbers

#include<iostream>
using namespace std;

int main(){
    int num, rev = 0;
    cout<<"Enter Numbers: ";
    cin>>num;

    while(num > 0){
        int ld = num % 10;
        rev = rev*10 + ld;
        num = num/10;
    }
    cout<<"Reverse = "<<rev;
    return 0;
}