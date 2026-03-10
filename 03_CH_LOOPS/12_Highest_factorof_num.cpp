// WAP to find the highest factor of a number 'n'(other than n itself)

#include<iostream>
using namespace std;

int main(){
    int num;

    cout<<"Enter a number: ";
    cin>>num;
    int f = 1; // we store highest factor 

    for(int i = 1; i <num; i++){
        if (num % i == 0) f = i;

    }
    cout<<f;

    return 0;
}