/*Given an array of integers , chnage the value of  all odd indexed elements to its 
second multiple and increment all even indexed value by 10*/

#include<iostream>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    for(int i = 0; i < n ; i++){
        if(i % 2 == 0){
            // even index: add 10
            arr[i] = arr[i] + 10;
        }
        else{

            arr[i] = arr[i] * 2; // odd index 
        }

    }
    for (int i = 0 ; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}