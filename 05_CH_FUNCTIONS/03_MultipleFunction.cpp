
#include<iostream>
using namespace std;

void usa(){
    cout<<"You are in USA"<<endl;
}
void india(){
    cout<<"You are in india"<<endl;
    usa();  //function call
}
int main(){
    cout<<"You are in main"<<endl;
    india();  // Function call

    return 0;
}
