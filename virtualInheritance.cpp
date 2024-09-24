#include <iostream>
using namespace std;

class GrantParent{
public:
    int number;
};
class Parent1: virtual public GrantParent{

};
class Parent2: virtual public GrantParent{

};
class Child: public Parent1,public Parent2{

};

int main(){
    cout<<sizeof(GrantParent)<<endl;
    cout<<sizeof(Parent1)<<endl;
    cout<<sizeof(Parent2)<<endl;
    cout<<sizeof(Child)<<endl;
    Child c;
    c=number=90;
    c.Parent1::number=80;
    c.Parent2::number=23;
    cout<<c.number<<endl;
}
