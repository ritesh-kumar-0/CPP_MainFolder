// Vector Function 
//Vector 
#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> v; // Empty Vector 

    // Add element at the end using .push_back()
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    // Access an element
    cout << v[0] << endl;       // 10

    // Access first element
    cout << v.front() << endl;  // 10

    // Access last element
    cout << v.back() << endl;   // 30

    // Number of elements
    cout << v.size() << endl;   // 3

    // Remove last element
    v.pop_back();

    // Print vector after removing element
    for(int x : v) {   // ranged based loop 
        cout << x << " ";
    }

    return 0;
}