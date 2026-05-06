//ARRAYS
#include<iostream>
using namespace std;

int main(){
    // 5 integers -> 6 ,2,8,5,0
    int arr[5]; //Array declaration

    cout<<"Enter arrays elements : ";
   for(int i=0; i<=4; i++){
    cin>>arr[i];
   }

    for(int i=0; i<=4; i++){
        cout<<arr[i]<<" ";
    }
    arr[0] = 100;// updating the value 
    cout<<endl;
     for(int i=0; i<=4; i++){
        cout<<arr[i]<<" ";
    }
}