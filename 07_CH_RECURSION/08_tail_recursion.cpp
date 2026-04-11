// Tail recursion verson 
#include<iostream>
using namespace std;

int fact(int n, int result){

    // Base case
    if(n == 0)
        return result;

    // Tail recursive call
    return fact(n - 1, n * result);
}

int main(){
    cout << fact(5, 1);
}