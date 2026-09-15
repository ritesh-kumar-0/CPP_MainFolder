// Traversing Vector using Normal for Loop
#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> v = {10, 20, 30, 40, 50};

    //i represent index 
    for(int i = 0; i < v.size(); i++) {

        // v[i] access the current elements
        cout << v[i] << " ";
    }

    return 0;
}