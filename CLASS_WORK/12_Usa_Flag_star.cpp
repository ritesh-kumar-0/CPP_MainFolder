// USA Flag Star printing 
#include <iostream>
using namespace std;

int main() {
    int rows = 9;
    int cols = 12;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if ((i + j) % 2 == 0)

                cout << "* ";  // Print star at even positions
            else
                cout << "  ";// Print space at odd positions
        }

        cout << endl;
    }

    return 0;
}

