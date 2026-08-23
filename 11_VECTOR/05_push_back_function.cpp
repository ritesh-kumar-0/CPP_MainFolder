// push_back() function
#include <iostream>
#include <vector> 
using namespace std;

int main(){
    vector <int> numbers;
//push_back() adds an element end of the vector 
    numbers.push_back(4);
    numbers.push_back(6);
    numbers.push_back(8);

    cout << "Vectors elements: ";
//print all elements 
    for(int x : numbers){
        cout << x <<" ";
    }
    // front()
    cout << "\nFirst element : " << numbers.front();
    //back()
    cout << "\nLast element: " << numbers.back();
    return 0;

}