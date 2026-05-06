//WAP to reverse the array without using any extra array.
#include<iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    
    // Variable pointing to first index
    int start = 0;
    //Variable pointing to last index
    int end = 4;
    //Temporary variable for swapping
    int temp;

    // Reverse array using swapping
    while(start < end) {
        temp = arr[start];
        arr[start] = arr[end]; // Replace first element with last element
        arr[end] = temp;

        start++;
        end--;
    }

    // Print reversed array
    cout << "Reversed Array: ";

    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}