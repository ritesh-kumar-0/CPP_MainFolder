// print the given pattern 
/* 1 2 3 4
   1 2 3 4
   1 2 3 4
   1 2 3 4
*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<< "Enter Numbers of row:";
    cin>>n;

    for(int i=1; i<=n; i++){    // outer loop -row
        for(int j=1; j<=n; j++){  // Inner loop - columns
            cout<<j<<" " ;
        }
        cout<<endl;
    }
}