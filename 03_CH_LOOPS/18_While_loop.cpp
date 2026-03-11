// Print Numbers from 1 to N.

#include<iostream>
using namespace std;

int main(){
    int n, i = 1;

    cout<<"Enter number:";
    cin>>n;

    while(i<=n){
        cout<<i<<" ";
        i++;
    }

    return 0;
}