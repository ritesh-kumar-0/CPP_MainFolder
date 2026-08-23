// WAP to print all the unique values in an array.
#include <iostream>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 2, 4, 1, 5};
    int size = 7;

    cout <<"Unique Values: ";

    //count how many times arr[i] occurs
    for (int i = 0; i < size; i++){
        int count = 0;
        
        for (int j=0; j<size; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if (count == 1){
            cout << arr[i] <<" ";
        }
    }
    return 0;
}