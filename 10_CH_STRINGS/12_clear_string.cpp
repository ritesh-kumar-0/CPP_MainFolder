/*The clear() function is used to remove all characters from a string,
 making it an empty string.*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "Ritesh";
    cout << s <<" "<<s.length() << endl;

    // Remove all characters from the string
    s.clear();

    cout << s <<s.length() << endl;

    return 0;
}