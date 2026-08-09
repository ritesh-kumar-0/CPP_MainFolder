//Find the product of all elements in a given matrix.
#include<iostream>
using namespace std;
int main(){
    int arr[3][3] = {{2,4,3},{4,6,2},{6,8,2}};
    int product = 1; // initialize product with 1

//Traverse each row
    for (int i = 0; i < 3; i++ ){
//Traverse each column
        for(int j = 0; j < 3; j++){
//multiply element with product
            product = product * arr[i][j];
        }
    }
cout<<"Product of all elements = "<<product <<endl;
return 0;
}