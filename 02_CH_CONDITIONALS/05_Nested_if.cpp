// Nested if 
// Write a program to check Voting & Driving Eligibility
#include<iostream>
using namespace std;

int main(){
     int age;
    cout << "Enter your age: ";
    cin >> age;

    if(age >= 18) {

        cout << "Eligible for Voting\n";

        if(age >= 21) {
            cout << "Eligible for Driving License";
        }

    }

    return 0;

}
