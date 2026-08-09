/* Given a matrix 'a' of dimention n x m and 2 coordinates (l1, r1)
and (l2, r2). Return the sum of the  rectangle from (l1,r1)to(l2,r2).*/
#include <iostream>
using namespace std;
int main(){

int a[4][4] = {{2,4,6,8}, {8,6,4,2},
               {3,5,7,8},{2,8,4,6}
};
//starting coordinate
int l1 = 1, r1 = 1;
//Ending coordinate 
int l2 = 2 , r2 =3;

int sum = 0;
// Traverse from row l1 to l2
for (int i= l1; i <= l2; i++ ){
// Traverse from column r1 to r2
    for (int j = r1; j <= r2; j++){
        sum = sum + a[i][j];
    }
}
cout << "Sum of rectangle = "<< sum << endl;
}