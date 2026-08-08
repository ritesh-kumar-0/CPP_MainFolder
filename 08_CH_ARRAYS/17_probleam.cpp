/*Count the number of elements in given array greater than a given number x.*/
#include <iostream>
using namespace std;

int main(){
    int a[] = {2, 4, 6, 8};
    int n = sizeof(a) / 4;
    int b[n];

    for (int i = 0; i < n; i++){
        int j = n - 1 - i;
        b[i] = a[j];
    }

    for (int i = 0; i < n ; i++){
        cout<< b[i] << " ";
    }
}