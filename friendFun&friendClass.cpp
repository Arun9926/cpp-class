//It can take access of private or protected member of any class in which we can declare it as a friend.

#include <iostream>
using namespace std;

class Bank {
private:
    int balance;
    string name;

public:
    Bank(int bal,string nm){
        balance = bal;
        name = nm;
    }
    void display(){
        cout<<"Name : "<<name<<" Balance : "<<balance<<endl;
    }
    friend void deposite(Bank& obj,int amount);
};

 void deposite(Bank &obj,int amount){
        obj.balance = obj.balance+amount;
    }

int main(){
    Bank obj(40000,"Arun");
    obj.display();
    deposite(obj,6000);
    obj.display();
}

