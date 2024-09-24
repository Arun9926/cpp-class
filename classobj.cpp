//In c++ to solve real world problem we have to user defined data-type
//real world problem
//IRCTC ---> Ticket,food,passenger,money
//-> structure
//->class
//here we define attribute (data) and behavior(method)
//but we want to secure our data , so in c++ we generally used class ,because in structure we dont have access specifier , (it is a concept of object oriented).
//class -- > class is user defined data-type which is created to solve real world problem .
//class is a blueprint here we actually define our data member and member function ,  (it is merely a logical entity).
//features of oops-->
//class and objects
//inheritance
//encapsulation
//polymorphism
//abstruction
/*
class Name {
    //access specifier
    //data  member
    //member function
};
*/
//wap to create a class Named System having attribute, name,ram,hard_disk,bahaviour, processing(), input(), output().
/*
#include <iostream>
using namespace std;

class System{
public:
    string name,category;
    int ram, hard_disk;

    void insert_data(){
        cout<<"Enter Name and Category of the system : ";
        cin>>name>>category;
        cout<<"Enter RAM and hard disk : ";
        cin>>ram>>hard_disk;
    }
    void display_data(){
        cout<<"Name : "<<name<<" "<<"Category : "<<category<<endl;
        cout<<"RAM : "<<ram<<"gb"<<" "<<"hard disk : "<<hard_disk<<"tb"<<endl;
    }
    void input(){
        cout<<name<<"System takes some input\n";
    }
    void process() {
        cout<<name<<"system starts processing\n";
    }
    void output(){
        cout<<name<<"system generates some output\n";
    }
};
int main(){
    System obj1;
    obj1.insert_data();
    obj1.display_data();
    obj1.input();
    obj1.process();
    obj1.output();
}
*/
//Write a c++ class named Circle constructed by a radius and two methods which will compute the area and the perimeter of a circle
/*
#include <iostream>
using namespace std;

class Circle{
public:
    double radius;
    void insert_data(){
        cout<<"Enter redius : ";
        cin>>radius;
    }
    void compute_the_area(){
        double area = 3.14*radius*radius;
        cout<<"area is : "<<area<<endl;
    }
    void perimeter(){
        double result = 2*3.14*radius;
        cout<<"perimeter is : "<<result;
    }
};
int main(){
    Circle obj1;
    obj1.insert_data();
    obj1.compute_the_area();
    obj1.perimeter();
}
*/
//Write a c++ class named animal constructed by a name, no_legs, category (herbivores, carnivores and omnivores)and two methods
//all_details() and category () . Create some instance and display result.
/*
#include <iostream>
using namespace std;

class Animal{
public:
    string name;
    int no_legs;
    string category;

    void all_details(){
        cout << "Name: " << name << endl;
        cout << "Number of Legs: " << no_legs << endl;
        cout << "Category: " << category << endl;
    }
    void display_category(){
        cout << "Category: " << category << endl;
    }
};
int main(){
    Animal lion;
    Animal cow;
    Animal bear;

    lion.name = "Lion";
    lion.no_legs = 4;
    lion.category = "Carnivores";

    cow.name = "Cow";
    cow.no_legs = 4;
    cow.category = "Herbivores";

    bear.name = "Bear";
    bear.no_legs = 4;
    bear.category = "Omnivores";

    cout << "Lion Details:" << endl;
    lion.all_details();
    cout << endl;

    cout << "Cow Details:" << endl;
    cow.all_details();
    cout << endl;

    cout << "Bear Details:" << endl;
    bear.all_details();
    cout << endl;

    cout << "Lion Category:" << endl;
    lion.display_category();
    cout << endl;

    cout << "Cow Category:" << endl;
    cow.display_category();
    cout << endl;

    cout << "Bear Category:" << endl;
    bear.display_category();
    cout << endl;

}
*/
