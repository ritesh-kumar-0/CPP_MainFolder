/* Q : Input a string of size n and update all the even position in
 the string to character 'a'. Consider o - based indexing .*/
#include <iostream>
using namespace std;

int main(){
    string s;

    cout <<"Enter a string: ";
    cin >> s;

    //traverse the string 
    for(int i = 0; i < s.length(); i++){
        //Check if index is even 
        if(i % 2 == 0){
            s[i] = 'a';
        }
    }
    cout <<"Updated string: "<< s;

    return 0;
}