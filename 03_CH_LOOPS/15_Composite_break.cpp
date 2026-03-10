// WAP to check if a number is composite or not . Using break statement
#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter a number: ";
    cin>>n;

    bool isComposite = false;   // Assume number is not composite

    for(int i = 2; i <= n/2; i++){
        if(n % i == 0){        // If any number divides n
            isComposite = true;
            break;             // Stop loop immediately
        }
    }

    if(isComposite)
        cout<<"Composite Number";
    else
        cout<<"Not a Composite Number";

    return 0;
}