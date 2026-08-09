//pop_back()
// It removes the last character from the end of string

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "Ritesh";

    // Remove last character
    s.pop_back();

    cout << s;

    return 0;
}