//Count the number of elements in given arrays greater then a given number x.
#include<iostream>
using namespace std;

int main(){
    int arr[6] = {2, 3, 5, 7, 9,4};
    int count = 0;
    int n ;
    cout<<"Enter Number :";
    cin>>n;

    for(int i = 0; i < 6; i++){
        if(arr[i] > n) count++;
    };

cout<<"The number of element grater than "<< n  << " = " <<  count <<endl;
return 0;
}