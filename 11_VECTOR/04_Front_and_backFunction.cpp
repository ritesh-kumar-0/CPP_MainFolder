// front() and back() Functions 
#include <iostream>
#include <vector> 
using namespace std;

int main(){
    vector <int> vec = {2, 4, 6, 8};
    cout<<"First element = "<< vec.front() << endl;
    cout<<"Last element = "<< vec.back() << endl;

    return 0;

}