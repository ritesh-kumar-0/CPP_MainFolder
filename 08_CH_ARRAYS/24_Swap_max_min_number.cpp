// WAP to swap the max & min number of an array 
#include <iostream>
using namespace std;
void swapNum(int &min, int &max){
     int temp = min;
     min = max;
     max = temp;
}

int main(){
    int arr[] = {2, 4, 1, 6, 8};
    int size = 5;

//Assume first element is minimum and maximum 
int minIndex = 0;
int maxIndex = 0;

//Find minimum and maximum index 
for(int i = 1; i < size; i++){
    if (arr[i] < arr[minIndex]){
        minIndex = i;
    }
    if (arr[i] > arr[maxIndex]){
        maxIndex = i;
    }
}
//fuction call 
swapNum(arr[minIndex], arr[maxIndex]);

//Print array
cout << "Array after swapping min and max: ";

for (int i = 0; i < size; i++){
    cout << arr[i] << " ";
}

return 0;


}
