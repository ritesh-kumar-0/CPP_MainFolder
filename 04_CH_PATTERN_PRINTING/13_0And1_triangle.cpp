/* Print the given Pattern
 1 
 0 1
 1 0 1
 0 1 0 1  */

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter numbers of row: ";
    cin>>n;

    for(int i = 1; i <= n; i++) {

        for(int j = 1; j <= i; j++) {
//If (row + column) is even → print 1

//If (row + column) is odd → print 0
            if((i + j) % 2 == 0)
                cout << "1 ";
            else
                cout << "0 ";
        }

        cout << endl;
    }

    return 0;

}