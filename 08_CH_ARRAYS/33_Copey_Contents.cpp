// Write a program to copey the contents of array into another in the reverse order.
#include<iostream>
using namespace std;

int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr)/4;
    int arr2[n];

    cout<<"Original Array: ";
    for(int i = 0; i < n; i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;

    // Copy elements of arr into arr2 in reverse order
    for(int i = 0; i < n; i++){
        arr2[i] = arr[n -1 -i]; //arr[n - 1 - i] gives elements from the end
    }

    cout<<"Reversed Array: ";
    for(int i =0; i<n; i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    return 0;
}
