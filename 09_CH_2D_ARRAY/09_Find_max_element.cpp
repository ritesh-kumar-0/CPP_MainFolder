// Find the maximum element in a given matrix .
#include<iostream>
using namespace std;

int main(){
    int arr[3][3] = {{12,44,33}, {16,81,4}, {44,66,5}};
//Assume the first element is maximum
    int max = arr[0][0];

    //traverse all rows
    for(int i = 0; i < 3; i++){
    // traverse all columns
        for(int j = 0; j < 3; j++){
            if(arr[i][j] > max){
                max = arr[i][j];
            }

        }
    }
cout << "maximum element = "<<max << endl;
}