/*Tail Recursion is a type of recursion where the recursive call 
is the last operation in the function.*/
//Print numbers from N to 1
#include<iostream>
using namespace std;

void print(int n){

    // Base case
    if(n == 0)
        return;

    // Work
    cout << n << " ";

    // Recursive call (last statement → Tail Recursion)
    print(n - 1);
}

int main(){
    print(5);
}