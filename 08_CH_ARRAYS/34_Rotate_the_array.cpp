//Rotate the given array 'a' by k steps , where k is non - negative .
//Note: k can be greater than n as well where n is the size of array 'a'.
#include<iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 6, 8, 12};
    int n = 7;
    int k = 3;

    //// If k is greater than n, we don't need to rotate k times completely.
    k = k % n;

    //Temporary array used to store rotated elements 
    int temp[n];

    for(int i = 0; i < k; i++){ // i = 0, 1, 2 because k = 3

        temp[i] = arr[n - k + i];
    }

    //Put remaining elements after last k elements 
    for(int i = 0; i < n - k; i++){
        temp[k + i] = arr[i];
    }

    for(int i = 0; i < n; i++){ // Loop through every index from 0 to 6
        arr[i] = temp[i];       // Copy each element of temp into arr
    }

    cout<<"Roated Array: ";
    for(int i = 0; i < n; i++){
        cout<< arr[i] << " ";
    }
    return 0;
}