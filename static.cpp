#include <iostream>
using namespace std;

class Bank {
private:
    int balance;
    string name;
    static int count;
public:
    Bank(int bal,string nm){
        balance = bal;
        name = nm;
        count++;
    }
    void display();
    static void number_of_customer(){
        cout<<count<<endl;
    }
};
int Bank::count=0;
void Bank::display(){
        cout<<"Name : "<<name<<" Balance : "<<balance;
    }
int main(){
    Bank obj(40000,"Arun"),obj2(60000,"ajay");
    Bank::number_of_customer();
    obj.display();
}
