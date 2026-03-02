/* Take 3 numbers input and tell if they can be the sides of a triangle.*/
#include<iostream>
using namespace std;

int main(){
    float a, b, c;
    cout<<"Enter three side of triangle: ";
    cin>>a>>b>>c;
    if(a>0 && b>0 && c>0){

    if(a>0 && b>0 && c>0){
        if((a+b>c) && (a+c>b) && (b+c>a)){
            cout<<"The given side can form a Triangle.";
        }
        else{
            cout<<"The given side cannot form a triangle.";
        }
    }
    }
    else{
        cout<<"Side most be positive Numbers.";
    }
    return 0;
     
}