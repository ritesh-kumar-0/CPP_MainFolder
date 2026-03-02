/* If cost price and selling  price of an item is input 
through the user, write a program*/
#include<iostream>
using namespace std;

int main(){
    int cp, sp;
    cout<<"Enter Cost price: ";
    cin>>cp;

    cout<<"Enter Selling Price: ";
    cin>>sp;

    if(sp>cp){
        cout<<"Profit is: "<<sp - cp;

    }
    else if(cp > sp){
        cout<<"Loss is: "<<cp - sp;
    }
    else{
        cout<<"Equal! NO profit No loss.";
    }
    return 0;
}