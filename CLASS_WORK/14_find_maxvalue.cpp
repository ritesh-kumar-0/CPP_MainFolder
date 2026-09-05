#include<iostream>
using namespace std;

int main(){
    int arr[] = {2, 4, 6, 8, 1, 3};
    int size =  sizeof(arr)/ sizeof(arr[0]);
    
    int maximum = INT_MIN;

    for(int i = 0; i < size; i++){
        if(arr[i] > maximum){
            maximum = arr[i];
        }

    }
cout<<"The maximum element is : "<< maximum << endl;
return 0;
}