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

    int max = arr[0];  // assume first element is maximum

    // Loop to find maximum
    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];   // update max
        }
    }

    cout << "Maximum value = " << max;

    return 0;
}