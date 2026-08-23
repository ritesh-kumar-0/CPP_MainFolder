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
    numbers.push_back(10);

    cout << "After push back Vectors elements: " ;
//print all elements 
    for(int x : numbers){
        cout << x <<" ";
    }
    cout << endl;

    numbers.pop_back(); // remove last element 
    
    cout<<"After pop back : ";
     for(int x : numbers){
        cout << x <<" ";
    }

  
    return 0;
}