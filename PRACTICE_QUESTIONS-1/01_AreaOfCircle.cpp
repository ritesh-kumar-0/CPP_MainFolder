// Calculating Area of circle 

#include <iostream>
using namespace std;

int main(){
    float radius , area;  // declare variables 

    cout << "Enter ratius : ";  
    cin >> radius;   // Take user  as input

    area = 3.14 * radius * radius;  // Formula
    cout << "Area of circle = " <<area;

    return 0;
}
