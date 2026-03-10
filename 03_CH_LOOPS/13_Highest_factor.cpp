// WAP to find the highest factor of a number 'n'(other than n itself)

#include<iostream>
using namespace std;

int main(){
    int num;

    cout<<"Enter a number: ";
    cin>>num;

    // loop from n/2 down to 1
    for(int i = num/2; i >= 1; i--){

        if (num % i == 0){  // check if i is a factor 
            cout<<"Highest factor other than "<<num<<"  is "<<i;
            break;
        }
    }
    return 0;
}