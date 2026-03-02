// Calculating Simple Intrest 
#include <iostream>
using namespace std;

int main(){
    float P, R, T, SI;  // declare variables
     // Taking user input
    cout << "Enter Principal: ";
    cin >> P;

    cout << "Enter Rate of Interest: ";
    cin >> R;   

    cout << "Enter Time (in years): ";
    cin >>T;

    SI = (P * R * T)/100;  // Apply simple intrest formula 

    cout << "Simple Intrest = "<<SI;

    return 0;
    
    
}