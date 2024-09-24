//Inheritance --> to inherit the property of parent class we use concept of inheritance.
//Type of inheritance -->
                          //A -- single level
                          //B -- multi level
                          //C -- multiple
                          //D -- hierarchical
                          //E -- hybrid
/*
#include <iostream>
using namespace std;

class parent {
public:
protected:
private:

};
class child : visibility_mode Parent {

};

int main(){

}
*/
/*
#include <iostream>
using namespace std;

class Parent {
private:
    void f1(){
        cout<<"This is a private function f1 of class parent \n";
    }
protected:
    void f2(){
        cout<<"This is a protected function f2 of class parent \n";
    }
public:
    void f3(){
        cout<<"This is a public function f3 of class parent \n";
    }

};
class child : public Parent {
public:
    void f4(){
        f2();
    }
};

int main(){
    child obj;
    obj.f4();
}
*/
//write a program to create class University having data member:university_name,address,,session,number_of_streams,number_of_collage
//member function: parameterized constructor, setter(),getter()
//create a child class collage having attribute data member: collage_name, address, number_of_student
//create a child class Student having attribute data member: student_name, address.
/*
#include <iostream>
using namespace std;

class University {
protected:
    string university_name;
    string university_address;
    int number_of_streams;
    int number_of_collage_affilated;
public:
    University(string uname, string uaddress){
        university_name = uname;
        university_address = uaddress;
        //number_of_streams = ustreams;
        //number_of_collage_affilated = ucollage_affilated;
    }

};
class Collage : public University {
protected:
    string collage_name;
    string collage_address;
    int number_of_student;
public:
    Collage(string uname, string uaddress, string cname, string caddress):University(uname,uaddress){
        collage_name = cname;
        collage_address = caddress;
        //number_of_student = cstudent;
    }

};
class Student : public Collage {
private:
    string student_name;
    string student_address;
public:
    Student(string uname, string uaddress, string cname,string caddress, string sname, string saddress):Collage(uname,uaddress,cname,caddress){
        student_name = sname;
        student_address = saddress;
    }
    void setter(string sname,string saddress){
        student_name = sname;
        student_address = saddress;
    }
    void display_info(){
        cout<<"University name is : "<<university_name<<endl;
        cout<<"University address is : "<<university_address<<endl;
        cout<<"Collage name is : "<<collage_name<<endl;
        cout<<"collage address is : "<<university_address<<endl;
        cout<<"Student name is : "<<student_name<<endl;
        cout<<"Student address is : "<<student_address<<endl;
    }
};

int main(){
    Student s1("RGPV","Bhopal","oriental","Bhopal","Arun patel","Bhopal");
    s1.display_info();
}
*/
//<======================================================>
//multipal inheritance
//<=====================================================>
//diamond /ambiguity problem-->in multiple inheritance whenever we define same data member and member
//function,then if child want to take access of any one of them with similar name then it may lead to
//conflict , this conflict\is known as diamond problem.
//To resolve this problem we use resolution operator(in hybrid we may also use virtual inheritance).
//if child has some data member and member function with same name. and with the help of child , we call them, then according
//to the principal of locality of refernce , function of child is called ,(not of any parent),this concept is known as method ovveriding.
/*
#include <iostream>
using namespace std;

class Parent1 {
public:
    int data;
    void f1(){
        cout<<"this is a function f1 of class Parent1\n";
    }

};
class Parent2 {
public:
    int data;
    void f1(){
        cout<<"this is a function f1 of class Parent1\n";
    }

};
class Child : public Parent1, public Parent2 {
public:
    int data;
    void f1(){
        cout<<"this is a function f1 of class Child\n";
    }
};

int main(){
    Child obj;
    obj.f1();
}
*/


//===========================================================================================================
//hybrid inheritance
//===========================================================================================================

#include <iostream>
using namespace std;

class GrandParent {
public:
    int data;
    void f1(){
        cout<<"this is a function f1 of class GrandParent\n";
    }

};
class Parent1:virtual public GrandParent {
public:
    void f2(){
        cout<<"this is a function f2 of class Parent1\n";
    }

};
class Parent2:virtual public GrandParent {
public:
    void f3(){
        cout<<"this is a function f3 of class Parent1\n";
    }

};
class Child : public Parent1, public Parent2 {
public:

};

int main(){
    Child obj;
    obj.f1();
}
