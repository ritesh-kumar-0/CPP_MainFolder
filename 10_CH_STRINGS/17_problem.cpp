/* Q: Return the total Number of digits in a number without using any loop. */
// try using inbuilt to_string() function 
#include <iostream>
using namespace std;

int main(){
    int x = 45678;
    string s = to_string(x);
    cout << s.length();
}