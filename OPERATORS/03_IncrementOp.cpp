//Increment Operator(x++(Post increment ))  
// It increases the value of a variable by 1
#include <iostream>
using namespace std;

int main (){
    int x = 4 ;
    cout << x++ << endl; // prints 5 (use old value )
    cout << x;           // now value become 6

    return 0;
}