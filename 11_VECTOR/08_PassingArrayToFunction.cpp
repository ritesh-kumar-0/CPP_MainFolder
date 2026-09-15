// Passing Array to function 
#include<iostream>
using namespace std;

void change(int x[]){
     x[0] = 10;
}

int main(){
    int arr[] = {2,4,5,7,8};
    cout<<arr[0]<< endl;   // 2
    change(arr);
    cout<<arr[0] <<endl;    //10
}
// Arrays are pass by referance 


