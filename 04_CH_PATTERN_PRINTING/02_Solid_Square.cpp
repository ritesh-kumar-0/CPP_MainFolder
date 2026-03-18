/* print the given pattern
   * * * *
   * * * *
   * * * *
   * * * *
*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;

    for(int i=1; i<=n; i++){     // rows=n
        for(int j=1; j<=n; j++){ // col=n
            cout<<"* ";
        }
        cout<<endl;
    }

}