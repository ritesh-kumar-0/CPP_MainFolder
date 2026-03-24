//Parameters and Arguments

#include<iostream>
using namespace std;

// a, b are PARAMETERS
int sum(int a, int b){
    return a + b;
}

int main(){
    // 5, 3 are ARGUMENTS
    cout << sum(5, 3);
}