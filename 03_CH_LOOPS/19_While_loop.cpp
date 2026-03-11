//WAP to print sum of N natural numbers


#include<iostream>
using namespace std;

int main(){
    int n, i = 0, sum = 0;

    cout<<"Enter N: ";
    cin>>n;

    while(i<=n){
        sum = sum + i;
        i++;
    }
    cout<<"Sum = "<<sum;
    return 0;
}