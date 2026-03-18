// Basic Structure 
/* print the given Pattern
     * * * * *
     * * * * *
     * * * * * 
                  */

#include<iostream>
using namespace std;

int main(){
  int m;
  cout<<"Enter number of row: " ;  // take input 3
  cin>>m;
  
  int n;
  cout<<"Enter number of columns: "; // take input 5
  cin>>n;

  for(int i=1; i<=m; i++){   //Number of row = m = 
    for(int i=1; i<=n; i++){   //Number of columns = n
        cout<<"* ";
    }
    cout<<endl;
  }
}