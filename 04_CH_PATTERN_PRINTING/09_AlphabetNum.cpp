/* print the given pattern
  1
  A B
  1 2 3
  A B C D
  1 2 3 4 5 */

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of row: ";
    cin>>n;
        for(int i = 1; i <= n; i++) {

        // Check if row is odd
        if(i % 2 != 0) {
            // Print numbers
            for(int j = 1; j <= i; j++) {
                cout << j << " ";
            }
        }
        else {
            // Print alphabets
            for(int j = 1; j <= i; j++) {
                char ch = 'A' + (j - 1);
                cout << ch << " ";
            }
        }

        cout << endl;
    }

    return 0;

}