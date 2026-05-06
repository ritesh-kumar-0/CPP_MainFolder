// Find the product of given array
#include<iostream>
using namespace std;

int main() {
    // n -> stores size of array 
    int n, product = 1;
     
    //Asks user to input size
    cout << "Enter size: ";
    cin >> n;
     
    //Declares array of size n
    int arr[n];

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {  //Runs from index 0 to n-1
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++) {
        product *= arr[i];  //Multiplies each element with product
    }

    cout << "Product = " << product;

    return 0;
}