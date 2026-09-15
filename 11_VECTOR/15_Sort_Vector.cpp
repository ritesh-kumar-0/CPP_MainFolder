#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> v(5);
// Input 
    cout<<"Enter 5 Numbers :";

    for(int i = 0; i < v.size(); i++){
        cin>>v[i];
    }
    // Vector Before sorting 
    
    cout << "Before sorting: ";
     for(int i = 0; i < v.size(); i++){
        cout<< v[i]<<"  ";
    }
    cout<<endl;

    sort(v.begin(), v.end()); // v.begin() points to the first element and v.end() points to the position just after the last element

    cout << "After sorting:";
    for(int i = 0; i < v.size(); i++){
        cout<< v[i]<<"  ";
    }
    cout<<endl;

    return 0;

}