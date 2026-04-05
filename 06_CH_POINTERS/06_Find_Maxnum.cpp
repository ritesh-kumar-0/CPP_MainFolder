// Find Maximum Number using Pointer.

#include<iostream>
using namespace std;

int main(){
    int a = 20,  b = 15;
    
    int *p = &a;
    int *q = &b;
    if(*p > *q){
        cout<<"Maximum = "<<*p;
    }
    else
        cout<<"Maximum = "<< *q;
    
    return 0;

}