// Display this AP - 1,3,5,7,9..... upto 'n' terms.
#include<iostream>
using namespace std;

int main(){
     int n;
     cout<<"Enter number of term: ";
     cin>>n;

     for(int i = 1; i <= n; i++){
        cout<< 1 + (i - 1) * 2 << " ";
     }
     return 0;
     
}