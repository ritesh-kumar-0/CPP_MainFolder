//Without Size
#include<iostream>
using namespace std;

int main() {
    int arr[] = {5, 10, 15, 20}; // size automatically 4

    for(int i = 0; i < 4; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}