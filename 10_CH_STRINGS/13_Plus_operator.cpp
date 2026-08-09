//The + operator is used to concatenate (join) two or more strings.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string firstName = "Ritesh";
    string lastName = "Kumar";

    string fullName = firstName + " " + lastName;

    cout << fullName;

    return 0;
}