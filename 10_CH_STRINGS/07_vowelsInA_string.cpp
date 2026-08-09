// Count number of vowels in a given string 
#include <iostream>
using namespace std;

int main(){
    string s = "Ritesh is a good Boy ";
    int count = 0;
    
// Traverse each character of the string
    for(int i = 0; i < s.length(); i++){
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' ||
            s[i] == 'o' || s[i] == 'u'){
                count ++;
            }
    }
    cout << "Number of Vowels = " << count;
    return 0;
}