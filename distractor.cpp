//It is a special member function which can deallocate the resources allocate by objects
//resource --> memory ,file handers.
//it can't be overloaded.
//name same as class name preceded by "~"(tilde)
//if we can't mention in our cod then compiler create it for you.
//destructor can be virtual.

#include <iostream>
using namespace std;

class Parent {
public:
    Parent (){
        cout<<"Parent constructor \n";
    }
    virtual ~Parent (){
        cout<<"Parent destructor \n";
    }
};
class Child : public Parent {
public:
    Child (){
        cout<<"Child constructor \n";
    }
    ~Child (){
        cout<<"Child destructor \n";
    }
};
class GrantChild : public Child {
public:
    GrantChild (){
        cout<<"GrantChild constructor \n";
    }
    ~GrantChild (){
        cout<<"GrantChild destructor \n";
    }
};
int main(){
    Parent * basepointer = new GrantChild;
    delete basepointer;
}

