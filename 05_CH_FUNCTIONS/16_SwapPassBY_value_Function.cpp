// Swap Function  Pass by value (Does Not Work) 
#include<iostream>
using namespace std;

// Function to swap values using value 
void  swap(int x, int y){
    int temp = x;
    x = y;
    y = temp;

}

int main(){
    int x = 12;
    int y = 45;

    cout<<x<<" "<<y<<endl;
    swap(x, y);
    cout<<x<<" "<<y<<endl;
}