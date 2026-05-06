// Declaration with User Input 
#include<iostream>
using namespace std;

int main() {
    int arr[5];  // declaration

    // Taking input
    for(int i = 0; i < 5; i++) {
        cout << "Enter element " << i << ": ";
        cin >> arr[i];   // store input in array
    }

    // Display output
    cout << "Array elements are: ";
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}