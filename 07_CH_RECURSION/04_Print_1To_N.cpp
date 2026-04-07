// Print 1 to n using Recursion
#include<iostream>
using namespace std;
void print(int x, int n){
    // Base case 
    if(x>n) return;
    cout<<x<<endl;
    //recursive call
    print(x+1, n);
}
int main(){
    int n;
    cout<<"Enter Number: "<<endl;
    cin>>n;
    print(1,n);
}