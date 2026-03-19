/* print the given pattern
        *
        * *
        * * *
        * * * *       */

 #include<iostream>
 using namespace std;    
 
 int main(){
    int row;
    cout<<"Enter numbers of row: ";
    cin>>row;
//outer loop -> controls numbers of row
    for(int i=1; i<=row; i++){
//inner loop -> numbers of stars in each row
//j <= i means: print stars equal to current row number
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
 }