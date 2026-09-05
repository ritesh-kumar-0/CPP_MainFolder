// WAP to find the area of a circle (area = π × r × r).

#include<iostream>    // include input output library

using namespace std; // standard namespace 
 int main(){         // main function 

    float r, area;  // Declare radius and area variables 
   
    cout << "Enter radius of circle: ";    // Ask user to enter radius
    cin >> r;   // Take radius as input

     area = 3.14 * r * r;  // Calculate area using formula π × r × r


    cout << "Area of circle = " << area;   // Display the result


    return 0;
   //  Random change
 }