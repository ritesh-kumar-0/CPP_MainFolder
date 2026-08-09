
#include <iostream>
#include <iostream>
using namespace std;

int main() {

    string s1;

    // Using cin >>
    cout << "Enter a string using cin >> : ";
    cin >> s1;

    cout << "Output: " << s1 << endl;

   
}
// When we take input like - Ritesh Kumar 
// output will be - Ritesh    // Why ??  
/*Because cin >> s only reads one word at a time . The >> operator stops reading 
when it encounters whitespace (space, tab, or newline).*/
//If you want to take a complete sentence/name
//  - Use getline():