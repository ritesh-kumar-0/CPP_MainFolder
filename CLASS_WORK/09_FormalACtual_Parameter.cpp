// Formal and actuaal parameters 

#include<iostream>
using namespace std;
//Function Definition 
int multiply(int x, int y) {  // x,y Formal Parameter
    int result = x * y;
    return result;

}
int main(){
    int output = multiply(3, 4);// 3, 4 - Actual Parameters

    cout<< "Result:  " << output;
    return 0;

}