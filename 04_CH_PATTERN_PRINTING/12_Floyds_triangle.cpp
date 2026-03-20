/* Print the given pattern 
    1 
    2 3
    4 5 6
    7 8 9 10   */

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter numbers of row: ";
    cin>>n;
    int num = 1;  // starting number

    for(int i=1; i<=n; i++){

        for(int j=1; j <= i; j++){
           cout << num <<" ";
           num++; //incresing number after printing
        }
        cout << endl;

    }
    return 0;
}