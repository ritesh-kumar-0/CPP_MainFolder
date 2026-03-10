// Print only odd numbers 

#include<iostream>
using namespace std;

int main(){
    for (int i = 1; i <=100; i++){
        if(i % 2 == 0) 
             continue; // skip even number
              
        cout << i << " ";
             

    }
    return 0;
}