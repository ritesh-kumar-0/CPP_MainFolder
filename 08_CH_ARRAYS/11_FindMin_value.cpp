// find minimum value 
// Find the maximum value out of all the elements 

#include<iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter size: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int min = arr[0];  // assume first element is maximum

    // Loop to find maximum
    for(int i = 1; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];   // update max
        }
    }

    cout << "Minimum value = " << min;

    return 0;
}