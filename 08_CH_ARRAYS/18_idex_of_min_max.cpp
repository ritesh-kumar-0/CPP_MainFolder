// Find the index of smallest and largest element on a array
#include <iostream>
using namespace std;

int main(){
    int num[] = { 2, 4, 6, -1, 5};
    int size = 5;
 
// Store smallest and largest values
    int smallest = INT_MAX;
    int largest = INT_MIN;

    // Store indexes of smallest and largest values
    int smallest_index = -1;
    int largest_index = -1 ;

// Loop through the array
    for(int i = 0; i<size; i++){
       
        // smallest value 
        if (num[i] < smallest){
            smallest = num[i];
            smallest_index = i;// Store its index
            
        }
    //Check largest value 
        if (num[i] > largest){
            largest = num[i];
            largest_index = i;// Store its index
        }
    }
    cout << "Smallest Number: "<< smallest << " at index "<< smallest_index << endl;
    cout << "Largest Number : "<< largest << " at index "<< largest_index <<endl;
    return 0;
}