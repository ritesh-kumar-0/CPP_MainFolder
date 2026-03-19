/* print the given pattern  
   A A A A
   B B B B
   C C C C  */

   #include<iostream>
   using namespace std;

   int main(){
    int row, columns;
    cout<<"Enter numbers of row: ";
    cin>>row;
    cout<<"Enter numbers of columns: ";
    cin>>columns;

    for(int i=1; i<=row; i++ ){

        char ch = 'A' + (i - 1);  // print character

        for(int j=1; j<=columns; j++){
            cout<<ch<< " ";
        }

        cout << endl;
    }
    return 0;
    

   }