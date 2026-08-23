// WAP to calculate sum & Product of all Numbers in an array.
#include <iostream>
using namespace std;

int main(){
   
    int arr[] = {2, 3, 4, 5, 6, 7};
    int sum = 0;
    int product = 1;
    for(int i = 0 ; i < 6 ; i++){
         sum = sum + arr[i];
        product *= arr[i];
    }
    
    cout <<"Sum = "<< sum << endl;
    cout <<"Product = " << product <<endl;
    return 0;

}