//Linear Search 
#include <iostream>
using namespace std;

//Function to search element 
int linearSearch(int arr[], int size, int target){
    for (int i=0; i<size; i++){
        if(arr[i] == target) {
            return i;// Return the index
        }
    }
    return -1; // Not Found
}
int main() {
    int arr[] = {4, 2, 7, 8, 1, 6, 5};
    int size = 7;
    int target = 1;

//call the function 
int index = linearSearch(arr, size, target);

//Check whether element not found 
if (index != -1){
    cout << " Element "<< target << " found at index: "<< index << endl;
}
else{
    cout << "Elemrnt " << target << " not found" << endl;
}

    return 0;
}