//WAP to add two Matrices 

#include<iostream>
using namespace std;
int main(){
    int a[2][2] = {{4,2},{5,6}};
    int b[2][2] = {{2,4},{6,2}};
    int sum[2][2];

     // Addition of matrices
    for(int i = 0; i < 2; i++) {

        for(int j = 0; j < 2; j++) {

            sum[i][j] = a[i][j] + b[i][j];
        }
    }
     for(int i = 0; i < 2; i++) {

        for(int j = 0; j < 2; j++) {

            cout<< sum[i][j] << " ";
        }
        cout<< endl;
     }
}