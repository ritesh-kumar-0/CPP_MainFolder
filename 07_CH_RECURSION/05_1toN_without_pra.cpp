// Print 1 to N without extras prameter 

#include<iostream>
using namespace std;
//Base case
void print(int n){
    if(n==0) return;  // Base case
    //Recursive call
    print(n-1);   
    cout<<n<<endl;
}
int main(){
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    print(n);

    return 0;
}


