/*WAP to store roll numbber and marks obtained by 4 students side by side in a matrix */
#include <iostream>
using namespace std;
int main(){
    int arr[4][2] = {{7,81},{8,88},{9,91},{10,95}};
     // Print table heading
    cout<<"Roll No\tMarks\n";
    
    // Print roll number and marks of each student
    for (int i =0; i < 4; i++) {
        cout << arr[i][0] << "\t" << arr[i][1] << endl;
    }

    return 0;
}