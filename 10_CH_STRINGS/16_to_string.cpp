// to-string()
#include <iostream>
using namespace std;

int main(){
    int x = 45678;
    string s = to_string(x); // convert digit to string 
    s = s + "rd";
    cout << s;
}