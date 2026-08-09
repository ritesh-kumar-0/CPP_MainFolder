
#include <iostream>
using namespace std;
int main(){
    char arr[] = "Ritesh is a good boy ";
    int i = 0;

    while(arr[i] != '\0'){
        cout << arr[i];
        i++;
    }
    return 0;
}