// Print n to 1
#include<iostream>
using namespace std;
void print(int n){
    // Base case 
    if(n==0) return;
    cout<<n<<endl;
    //recursive call
    print(n-1);
}
int main(){
    print(3);
}