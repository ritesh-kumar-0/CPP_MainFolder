#include <iostream>
using namespace std;

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int n;
    cout<<"Enter Element to find ! :";
    cin >>n;

    for (int i = 0; i <= 10; i++){
        if (arr[i] == n){
            cout<<" It is Avelable on index : "<< i ;
        }
       
    }
    return 0;
}