/*The reverse() function is used to reverse the order of elements in a string,
 array, or other containers
  -For a string, it changes the characters from last to first */

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s = "Ritesh";

    // Reverse the string
    reverse(s.begin(), s.end());

    cout << s;

    return 0;
}