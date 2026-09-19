//Find the doublet in the Array whose sum is equal to the given value x.
#include <iostream>
using namespace std;
int main(){

    int arr [] = {2, 7, 11, 15};
    int x = 9;
    int n = 4;


    for(int i = 0; i < n ; i++){
        for( int j = i + 1; j < n; j++){
            if(arr[i] + arr[j] == x){
                cout<<"Doublet  " << arr[i] <<" " << arr[j];
            }
        }
    }
    return 0;

}