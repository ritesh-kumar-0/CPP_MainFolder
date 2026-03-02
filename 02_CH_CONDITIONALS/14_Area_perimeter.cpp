/*Write a program to find whether the area of rectangle is 
graeter than its perimeter*/
#include<iostream>
using namespace std;

int main() {

    float length, breadth;

    // Taking input from user
    cout << "Enter length of rectangle: ";
    cin >> length;

    cout << "Enter breadth of rectangle: ";
    cin >> breadth;

    // Check for positive dimensions
    if(length > 0 && breadth > 0) {

        float area = length * breadth;              // Calculate area
        float perimeter = 2 * (length + breadth);   // Calculate perimeter

        cout << "Area = " << area << endl;
        cout << "Perimeter = " << perimeter << endl;

        // Compare area and perimeter
        if(area > perimeter) {
            cout << "Area is greater than Perimeter.";
        }
        else if(area == perimeter) {
            cout << "Area is equal to Perimeter.";
        }
        else {
            cout << "Area is NOT greater than Perimeter.";
        }

    }
    else {
        cout << "Please enter positive values only.";
    }

    return 0;
}