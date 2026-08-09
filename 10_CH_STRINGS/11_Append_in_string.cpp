//The append() function is used to add one string to the end of another string.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "Ritesh";

    // Add another string at the end
    s.append(" Kumar");

    cout << s;

    return 0;
}