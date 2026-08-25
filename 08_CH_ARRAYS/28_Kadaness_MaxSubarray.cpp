//Kadane's Algorithm 
#include <iostream>
using namespace std;

int main(){
    int arr[] = {3, -4, 5, 4, -1, 7, -8};
    int size = 7;
    int maxSum = INT_MIN,  currSum = 0;
        
    for(int i = 0; i<size; i++) {

// Add current element to current subarray sum
        currSum += arr[i];

        // Update maximum sum
        maxSum = max(currSum,maxSum );

        // If current sum becomes negative
        if(currSum < 0){
            currSum = 0;
        }
    }
cout <<"Max of Subarrray : " << maxSum << endl;
return 0;
}