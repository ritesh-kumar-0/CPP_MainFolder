// Calculate the sum of all the elements int the given array.
#include<iostream>
using namespace std;

int main(){
    int arr[] = { 2, 4, 6, 8};
    int sum = 0;

    //Loop through array 
    for(int i = 0; i < 5; i++){
        sum = sum + arr[i]; // add each element 
    }

    cout << "Sum of array elements = "<<sum;
    return 0;

}