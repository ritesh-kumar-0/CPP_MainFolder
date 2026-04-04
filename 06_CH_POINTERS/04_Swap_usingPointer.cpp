// Swap By Paas by Reference 
#include<iostream>
using namespace std;

// Function to swap values using reference
void  swap(int* a, int* b){ 
    int temp = *a;  // store x in temp
    *a = *b;  // assign y to x
    *b = temp; // assign temp to y

}

int main(){
    int x = 12;
    int y = 45;

    cout<<x<<" "<<y<<endl;  // print before swap
    swap(&x, &y);  // call swap function 
    cout<<x<<" "<<y<<endl; // print after swap 

    return 0;
}