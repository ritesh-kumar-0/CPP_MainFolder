// Fibonacci using recursion 

#include<iostream>
using namespace std;

int fibo(int n){
    if (n==1 || n==2)   return 1;
    //Recursive call 
    return fibo(n-1) + (n-2);
}
int main(){
    int n;
    cout<<"Enter Number:";
    cin>>n;

    cout<<"Fibonacci: " <<fibo(n);

    return 0;
}