//pop_back()
#include <iostream>
#include <vector> 
using namespace std;

int main(){
    vector <int> numbers;
//push_back() adds an element at the  end of the vector 
    numbers.push_back(4);
    numbers.push_back(6);
    numbers.push_back(8);

    cout << numbers.size() << endl; // 3
    cout << numbers.capacity() << endl; // 4
    return 0;
}