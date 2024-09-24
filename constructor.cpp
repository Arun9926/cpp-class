//if we are not defining any constructor explicitly then the compiler itself create a constructor non as default cons.
//it is healdy practice any one of three cons. in a class.
/*
System(){
    name="";
    category="";
    hard_disk=0;
    ram=0;
}
*/
//=================================================================
//-------------------parameterized coustructor---------------------
//=================================================================
//1--> it is special member function which is create to construct the memory for all data member in a class.
//2--> also help to initialized data member of a class.
//3--> name of the constructor must be same as class name.
//4--> calling of constructor must be done implicitly automatic calling.
//(whenever object is created at the same time , to construct memory for that object - data member , constructor is called at the same time,)
//5-->constructor not return any value , we don't mention it in our code.
//6-->it should be defined at public access modifier.
//7-->constructor can we overloaded.
//8--> it is classified as
    //A-->default - created by compiler itself if we can't defined it.
    //B-->parameterized.
    //C-->copy constructor.
/*
    System(string name,string category, int hard_disk, int ram){
    name=name;
    category=category;
    hard_disk=hard_disk;
    ram=ram;
}
*/
//============================================================================
//------------------------------copy constructor------------------------------
//============================================================================
//this (self refrence)

#include <iostream>
using namespace std;

class Game{
private:
    string category,status;
    int id;
public:
    Game(string category,string status,int id){
        this->category = category;
        this->status = status;
        this->id = id;
    }

    void display(){
        cout<<id<<endl;
        cout<<category<<status;
    }
};

int main(){
    Game g1("team mate","living",101);
    g1.display();
}

//------------------------------Deep copy---------------------------------
#include <iostream>
using namespace std;

class Game{
private:
    string category,status;
    int id;
public:
    Game(string category,string status,int id){
        this->category = category;
        this->status = status;
        this->id = id;
    }

    void display(){
        cout<<id<<endl;
        cout<<category<<status;
    }
};

int main(){
    Game g1("team mate","living",101);
    g1.display();
}
/*
#include <iostream>
using namespace std;

class Employee{
public:
    int eid;
    string ename, dob, department;
    double salary;
    Employee(int id,string name,string date,string dep,double sal){
        eid=id;
        ename=name;
        dob=date;
        department=dep;
        salary=sal;
    }
    void display(){
        cout<<"Employee id : "<<eid<<" "<<"Employee Name : "<<ename<<endl;
        cout<<"Date : "<<dob<<" "<<"Department : "<<department<<endl;
        cout<<"Salary : "<<salary<<endl;
    }
};

int main(){
    Employee *objptr = new Employee(101,"ajay","12/12","IT",90000);
    objptr->display();
}
*/
