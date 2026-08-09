//Find the sum of all elements in a given Matrix .

#include<iostream>
using namespace std;
int main(){
    int arr[3][3] = {{4,6,4}, {6,8,4}, {8,10,3}};
    int sum = 0; //variable to store sum

    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){

            sum = sum + arr[i][j]; // add each element 
        }
    }
    cout << "Sum of all elements = " << sum << endl;
    return 0;
}