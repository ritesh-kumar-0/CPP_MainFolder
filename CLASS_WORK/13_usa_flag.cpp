// USA Flag 
#include <iostream>
using namespace std;

int main() {
    int rows = 9;        // total rows
    int starCols = 12;   // width of star section
    int stripeCols = 30; // total width

    for (int i = 0; i < rows; i++) {
        
        // Print stars area (top-left corner)
        for (int j = 0; j < starCols; j++) {
            if ((i + j) % 2 == 0)
                cout << "*";
            else
                cout << " ";
        }

        // Print stripes area
        for (int j = starCols; j < stripeCols; j++) {
            if (i % 2 == 0)
                cout << "=";
            else
                cout << "-";
        }

        cout << endl;
    }

    // Remaining stripes (without stars)
    for (int i = rows; i < 15; i++) {
        for (int j = 0; j < stripeCols; j++) {
            if (i % 2 == 0)
                cout << "=";
            else
                cout << "-";
        }
        cout << endl;
    }

    return 0;
}