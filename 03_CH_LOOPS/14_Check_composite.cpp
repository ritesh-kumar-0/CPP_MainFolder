// WAP to check if a number is composite or not .
#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int count = 0;  // Variable to count factors

    for(int i = 1; i <= n; i++){
        if(n % i == 0){   // Check if i is a factor
            count++;
        }
    }

    if(count > 2){
        cout<<"Composite Number";
    }
    else{
        cout<<"Not a Composite Number";
    }

    return 0;
}