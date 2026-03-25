// Swap two numbers without using extra variables .

#include<iostream>
using namespace std;

int main(){
   int x = 2;
   int y = 5;
   // Print values before swapping
   cout<<x<<" "<<y<<endl;    // 2 5

    x = x + y;        // x+y = 7
    y = x - y;        // x-y = 2
    x = x - y;        // x-y = 5

    // Print values after swapping
    cout<<x<<" "<<y<<endl;     // 5 2

    return 0;

}