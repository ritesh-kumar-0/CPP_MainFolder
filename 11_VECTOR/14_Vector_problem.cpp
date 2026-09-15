#include <iostream>
#include <vector>
using namespace std;

int main() {

    // create a vector 
    vector<int> v;

    // Add Elements
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    // Vector print
    cout << "Vector: ";

    for(int x : v) {
        cout << x << " ";
    }

    cout << endl;

    //  size of vector 
    cout << "Size: " << v.size() << endl;

    // First element
    cout << "First: " << v.front() << endl;

    // Last element
    cout << "Last: " << v.back() << endl;

    // Last element remove
    v.pop_back();

    cout << "After pop_back: ";

    for(int x : v) {
        cout << x << " ";
    }

    return 0;
}