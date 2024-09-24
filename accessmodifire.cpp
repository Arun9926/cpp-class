//Access Modi.--> by default all member of class are private. we can't take access of private member outside the class.
//Note --> generally we define data member as private member, and member function as public.
//whenever we make data member and member function private , we actually lock our class.
//if we want access of private member, it should be done public member function, actually we can take access of private member indirectly.
/*
#include <iostream>
using namespace std;

class Employe{
private:
    int eid;
public:
    void set_id(int id){
        eid=id;
    }
    void get_id(){
        cout<<eid;
    }
};

int main(){
    Employe e1;
    e1.set_id(1231);
    e1.get_id();
}
*/
//1)Write a C++ program to define a class named Circle.
//private member: radius
//public member functions:calculate_area(),calculate_circumference()
/*
#include <iostream>
using namespace std;

class Circle{
private:
    int radius;
    public:
        void set_radius(int r){
            radius = r;
        }
        void calculate_area(){
            double area = 3.14*radius*radius;
            cout << "Circle Area: "<<area<<endl;
        }
        void calculate_circumference(){
            double circum = 2*3.14*radius;
            cout << "Circle Circumference: "<<circum<<endl;
        }

};

int main(){
    Circle c1;
    c1.set_radius(10);
    c1.calculate_area();
    c1.calculate_circumference();
}
*/
//Write a C++ program to define a class named  Rectangle.
//private member:length and width
//public member functions:calculate_area(),calculate_perimeter()
/*
#include <iostream>
using namespace std;

class Rectangle{
private:
    int length,width;
    public:
        void set_length_width(int l, int w){
            length = l;
            width = w;
        }
        void calculate_area(){
            double area = length*width;
            cout << "Rectangle Area: "<<area<<endl;
        }
        void calculate_perimeter(){
            double perimeter = (length+width)*2;
            cout << "Rectangle perimeter: "<<perimeter<<endl;
        }

};

int main(){
    Rectangle r1;
    r1.set_length_width(10,10);
    r1.calculate_area();
    r1.calculate_perimeter();
}
*/
//3)Write a C++ program to define a class named  Person.
//private member: name, age and country
//constructor: initialized values (parameterized)
//public member functions:getter()--->to get all values
//change_age()--->to change the age of given objects.
/*
#include <iostream>
using namespace std;

class Person{
private:
    string person_name;
    int person_age;
    string person_country;
    public:
        Person(string name, int age, string country){
            person_name = name;
            person_age = age;
            person_country = country;
        }
        void getter(){
            cout<<"Person name is : "<<person_name<<endl;
            cout<<"Person age is : "<<person_age<<endl;
            cout<<"Person country is : "<<person_country<<endl;
        }
        void change_age(int age){
            person_age = age;
        }
};

int main(){
    Person p1("Arun Patel",26,"India");
    p1.getter();
    p1.set_age(27);
    p1.getter();
}
*/

//5)Write a C++ program to define a class named Car.
//protected member: company, model, and year
//constructor: initialized values (parameterized)
//public member functions:getter(),setter()
/*
#include <iostream>
using namespace std;

class Car{
protected:
    string company,model,year;
    public:
        Car(string car_company, string car_model, string car_year){
            company = car_company;
            model = car_model;
            year = car_year;
        }
        void getter(){
            cout<<"car company is : "<<company<<endl;
            cout<<"car model is : "<<model<<endl;
            cout<<"car year is : "<<year<<endl;
        }
        void setter(string car_company, string car_model, string car_year){
            company = car_company;
            model = car_model;
            year = car_year;
        }
};

int main(){
    Car c1("Maruti Suzuki","Scross","2018");
    c1.getter();
    c1.setter("Maruti Suzuki","Grand vitara Alpha","2024");
    c1.getter();
}
*/

//9. Write a C++ program to implement a class called Student that has private member variables for name, class, roll number, and marks.
//member functions to calculate the grade based on the marks and display the student's information.
/*
#include <iostream>
using namespace std;

class Student{
private:
    string name,class_;
    int roll_number;
    double marks;
    public:
        void set_info(string student_name, string student_class, int student_roll_number, double student_marks){
            name = student_name;
            class_ = student_class;
            roll_number = student_roll_number;
            marks = student_marks;
        }
        void calculate_grade(){
            if(marks>80){
                cout<<"Grade A"<<endl;
            }
            else if(marks<80 && marks>60){
                cout<<"Grade B"<<endl;
            }
            else if(marks<60 && marks>40){
                cout<<"Grade B"<<endl;
            }
        }
        void display_info(){
            cout<<"Student name is : "<<name<<endl;
            cout<<"Student class is : "<<class_<<endl;
            cout<<"Student roll number is : "<<roll_number<<endl;
            cout<<"Student marks is : "<<marks<<endl;
        }
};

int main(){
    Student s1;
    s1.set_info("Arun Patel","C++",123,79);
    s1.display_info();
    s1.calculate_grade();
}
*/
//6)Write a C++ program to define a class named CarEngine
//which can inherit the above class Car and its visibility mode is public.
//its own attribute are:
//private member: engine_type,engine_no_of_cylinder
//public member functions:getter() -->to get all values.(object of child class get all values including parent)

/*

#include <iostream>
using namespace std;

class Car{
protected:
    string company,model,year;
    public:
        Car(string car_company, string car_model, string car_year){
            company = car_company;
            model = car_model;
            year = car_year;
        }
        void getter(){
            cout<<"car company is : "<<company<<endl;
            cout<<"car model is : "<<model<<endl;
            cout<<"car year is : "<<year<<endl;
        }
        void setter(string car_company, string car_model, string car_year){
            company = car_company;
            model = car_model;
            year = car_year;
        }
};
class CarEngine : public Car{
private:
    string engine_type;
    int number_of_cylinder;
public:
    CarEngine (string car_company, string car_model, string car_year, string type, int cylinder): Car(car_company,car_model,car_year){
        engine_type = type;
        number_of_cylinder = cylinder;
    }
    void get(){
        getter();
        cout<<"Engine type is : "<<engine_type<<endl;
        cout<<"Number of cylinder is : "<<number_of_cylinder<<endl;
    }
};

int main(){
    CarEngine ce1("maruti","alpha","2024","petrol",4);
    ce1.get();
}
*/

//7)Write a C++ program to define a class named Triangle.
//private member: lengths of its three sides
//public member functions:calculate_area()-->using Heron's formula
//determine_type()---->to determine if the triangle is equilateral, isosceles, or scalene.
/*
#include <iostream>
#include <cmath>

using namespace std;

class Triangle{
private:
    double side1,side2,side3;
    public:
        Triangle(int sd1,int sd2,int sd3){
            side1=sd1;
            side2=sd2;
            side3=sd3;
        }
        double calculate_area(){
            double s = (side1 + side2 + side3) / 2;
            return sqrt(s * (s - side1) * (s - side2) * (s - side3));
        }
        string determine_type(){
        if (side1 == side2 && side2 == side3) {
            return "Equilateral";
        } else if (side1 == side2 || side2 == side3 || side1 == side3) {
            return "Isosceles";
        } else {
            return "Scalene";
        }
        }
        void display_info(){
        cout << "Sides: " << side1 << ", " << side2 << ", " << side3 <<endl;
        cout << "Area: " << calculate_area() <<endl;
        cout << "Type: " << determine_type() <<endl;
    }
};

int main(){
    double sd1, sd2, sd3;
    cout << "Enter the three sides of Triangle: ";
    cin >> sd1 >> sd2 >> sd3;
    Triangle tr(sd1, sd2, sd3);
    tr.display_info();
}
*/
//Write a C++ program to define a class named Employee.
//private member: name, employee ID, dep ,designation,performance(bad-0,avg-1,good-2,very-good-3,best-4 (use default constructor)
//public member functions:setter(),getter()

# include <iostream>
using namespace std;

class Employee{
  private:
     string name,department,desig;
     int eid;

     void setperformance(){
        int choice;
       cout<<"please select performance in the following options:\n";
       cout<<" '0-bad' ,'1-avg','2-good','3-vgood','4-best' :";
       cin>>choice;
       switch(choice){
           case 0: performance="bad";break;
           case 1: performance="average";break;
           case 2: performance="good";break;
           case 3: performance="v good";break;
           case 4: performance="best";break;
       }
    }
  protected:
       string performance;
   public:
     Employee(){
      cout<<"enter eid,name,department,designation";
      cin>>eid>>name>>department>>desig;
      setperformance();
     }

       void display(){
          cout<<"Eid:"<<eid<<endl;
          cout<<"Name:"<<name<<endl;
          cout<<"DEoartment:"<<department<<endl;
          cout<<"Designation:"<<desig<<endl;
          cout<<"Performance:"<<performance<<endl;
       }
};

class EmpSalary: public Employee{
   private:
    double salary,basic,hra,da,pf;

    double prepare_salary(){
     return  basic+hra+da-pf;
    }
   public:
      EmpSalary(double b ,double h,double d_a,double p_f){
        basic=b;
        hra=h;
        da=d_a;
        pf=p_f;
        salary=prepare_salary();
      }
      void bonus(){
         if(performance=="good" || performance =="vgood"
                               || performance=="best"){
              salary=salary+2000;
            }
      }
      void display(){
          Employee::display();
         cout<<"Net salary:"<<salary<<endl;
      }
};
int main(){
   EmpSalary employee1(12000,3000,1200,2000);
   employee1.display();

}
