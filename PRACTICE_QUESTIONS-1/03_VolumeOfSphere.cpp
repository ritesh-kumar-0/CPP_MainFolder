// Calculate the Volume of a Sphere

#include<iostream>
using namespace std;
int main(){
    float radius,volume ;  // declare variable 
    const float PI = 3.1416; // Constasnt value of PI
    cout<<"Enter radius: ";
    cin>>radius;

    volume = (4.0/3.0)*PI*radius*radius*radius; // Apply formula 

    cout<<"The volume of sphere = "<<volume;  // print result
    return 0;


}