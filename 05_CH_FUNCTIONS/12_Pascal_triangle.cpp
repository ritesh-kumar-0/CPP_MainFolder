// Pascal triangle 
#include<iostream>
using namespace std;

//Factorial Function
int fact(int x){
    int f =1;   // Initialize factorial as 1
    for (int i = 1; i <= x; i++){
        f *= i;   // Multiply f with i (f = f * i)
    }
    return f;
}
//Combination Function
int nCr (int n, int r){
    return fact(n)/(fact(r)* fact(n-r));
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    // Outer loop for rows (0 to n)
    for (int i = 0; i<=n; i++){
        
       // Inner loop for printing elements in each row 
        for(int j = 0; j <= i; j++){
            cout<<nCr(i,j)<<" ";
        }
        cout<<endl;
    }
    
}