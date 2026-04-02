
#include<iostream>
using namespace std;

int main(){
    int x = 12;
// pointer ptr stores address of x
    int* ptr = &x;

    cout<<x<<endl;
 // *ptr -> Go to the address stored in ptr and change value
    *ptr = 23;    
    cout<<x<<endl;
}