#include <iostream>
using namespace std;

int main() {
    int n =5;
    int arr[] = {1, 2, 3, 4, 5};
// st = starting index of the subarray
    for (int st=0; st<n; st++){

        // 'end' = ending index of the subarra, It starts from 'st' because end cannot be before start
        for(int end=st; end<n; end++){
            // Print all elements between st and end
            for(int i=st; i<=end; i++){
                cout << arr[i];
            }
            cout << " ";// space 
        }
        cout << endl;
    }
    return 0;
}