//Program to Check Whether an Array is Palindrome or Not
#include<iostream>
using namespace std;

int main() {

    // Declare and initialize array
    int arr[5] = {1, 2, 3, 2, 1};

    // Size of array
    int n = 5;

    // Variables for first and last index
    int start = 0;
    int end = n - 1;

    // Variable to check palindrome
    bool isPalindrome = true;

    // Compare elements from both sides
    while(start < end) {

        // If elements are not same
        if(arr[start] != arr[end]) {
            isPalindrome = false;
            break;
        }

        // Move forward
        start++;

        // Move backward
        end--;
    }

    // Print result
    if(isPalindrome) {
        cout << "Array is Palindrome";
    }
    else {
        cout << "Array is Not Palindrome";
    }

    return 0;
}