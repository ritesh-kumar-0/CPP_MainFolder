//Reverse an Array 
// arr[] = {4, 2, 7, 8, 1, 2, 5}
#include <iostream>
using namespace std;

int main(){
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int size = 7;
    cout<<"Original Array:";
    for(int i=0; i<size; i++){
        cout<< arr[i] << " ";
    }
    cout << endl;

    //Reverse Array
    cout << "Reverse Array: ";
    for(int i=size-1; i>=0; i--){
        cout<< arr[i] << " ";
    }
    return 0;

}

