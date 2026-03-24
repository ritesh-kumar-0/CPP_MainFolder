//Program for Permutation (nPr)

#include<iostream>
using namespace std;

// Function to calculate factorial
int fact(int x){
    int fact = 1;
    for(int i=1; i <= x; i++){
        fact = fact * i;
    }
    return fact;

}
int main(){
    int n , r;

    cout<<"Enter value of n: ";
    cin>>n;

     cout<<"Enter value of r: ";
    cin>>r;

    int nPr = fact(n)/ fact(n - r);
    cout<< "nPr (Permutation) = "<< nPr;

    return 0;
}