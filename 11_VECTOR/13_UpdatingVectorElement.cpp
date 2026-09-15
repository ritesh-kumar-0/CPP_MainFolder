// Updating A vector Element 
#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> v = {10, 20, 30};

    // Change the value of index 1 
    v[1] = 200;

    // Print vector
    for(int x : v) {
        cout << x << " ";  // 10 , 200, 30
    }

    return 0;
}