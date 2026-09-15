//Range-Based for Loop
#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> v = {10, 20, 30, 40, 50};

    // Store each elemnts of vector v in  x 
    for(int x : v) {

        // Print the current Element
        cout << x << " ";
    }

    return 0;
}