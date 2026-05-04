#include<iostream>
using namespace std;

class Base 
{
    public:
    void display(){
        cout<<"Base class Display";
    }
};
class derived : public Base{
    public:
    void dispaly(){
        cout<<"derived clas display";
    }
};
int main(){
    Base *bptr;
    derived d;
    bptr = &d;

    return 0;
}


