#include <iostream>
using namespace std;

//Function to reverse Array
void reverseArray(int arr[], int size){
    int start = 0, end = size-1;

    // loop 
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){
    int arr[] = {4, 2, 6, 5, 8};
    int size = 5;

    //Function call 
    reverseArray(arr, size);

    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}