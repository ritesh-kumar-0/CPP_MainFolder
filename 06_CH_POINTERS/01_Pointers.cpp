#include<iostream>
using namespace std;
int main(){
int a = 10;
int *p = &a;

cout << a << endl;   // 10
cout << &a <<endl;  // address
cout << p <<endl;   // same address
cout << *p <<endl;  // 10

return 0;
}