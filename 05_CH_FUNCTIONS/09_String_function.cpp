// String Functions (<cstring>)

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[] = "Hello";
    char str2[] = "World";

    cout << strlen(str1) << endl;
    strcat(str1, str2);
    cout << str1 << endl;

    return 0;
}