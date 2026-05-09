/*A 2D array is an array that contains rows and columns.
It is also called a matrix or table-like structure.
-> It stores data in tabular form */
#include<iostream>
using namespace std;
int main() {

    // Declare and initialize array
    int arr[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    // Outer loop for rows
    for(int i = 0; i < 2; i++) {

        // Inner loop for columns
        for(int j = 0; j < 3; j++) {

            // Print elements
            cout << arr[i][j] << " ";
        }

        // Move to next line
        cout << endl;
    }

    return 0;
}