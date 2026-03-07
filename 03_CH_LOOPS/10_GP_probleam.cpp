// Display this GP 1, 2, 4, 8, 16, 32.....upto 'n' terms.

#include<iostream>
#include<cmath>
using namespace std;

int main() {

    int n;
    int a = 2;   //First term
    int r = 3;    //Common ratio

    cout << "Enter number of terms: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        cout << a * pow(r, i-1) << " ";
    }

    return 0;
}