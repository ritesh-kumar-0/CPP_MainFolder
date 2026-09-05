// Printing numbers 

#include<iostream>  // Include input-output library
using namespace std;  // Use standard namespace

int main (){
    cout <<"4" << endl;   // "4" is inside double quotes → It is a STRING → prints exactly 4

    // 4 without quotes → It is an INTEGER → prints number 4
    cout << 4 << endl ;
     // 4+3 is an arithmetic expression → compiler calculates it → prints 7
    cout << 4+3 << endl;
    // "4+3" is inside quotes → It is a STRING → prints exactly 4+3 (no calculation)
    cout <<"4+3";

    return 0;
}