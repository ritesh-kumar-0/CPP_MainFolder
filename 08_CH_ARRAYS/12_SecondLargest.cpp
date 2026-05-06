//Find Second Largest 
#include<iostream>
using namespace std;

int main() {
    int arr[5] = {10, 25, 40, 15, 30};

    int largest = arr[0];
    int secondLargest = arr[0];

    // Find largest element
    for(int i = 0; i < 5; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }

    // Find second largest element
    for(int i = 0; i < 5; i++) {
        if(arr[i] > secondLargest && arr[i] < largest) {
            secondLargest = arr[i];
        }
    }

    cout << "Largest element = " << largest << endl;
    cout << "Second largest element = " << secondLargest;

    return 0;
}