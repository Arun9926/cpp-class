/*1.Define a class to represent a bank account. Include the following members:

Data members:
1) Name of the depositor
2) Account number
3) Type of account
4) Balance amount in the account.
5) password

Member functions:
1) To assign initial values (constructor)
2) To deposit an amount (match password if want to perform operation)
3) To withdraw an amount after checking the balance (match password if want to perform operation)
4) To display name and balance.
*/
/*
#include <iostream>
using namespace std;
class Bank {
private:
    string name_of_depositor;
    int account_number;
    string type_of_account;
    double balance;
    string password;
public:
    Bank(string name_of_depositor,int account_number,string type_of_account,double balance,string password){
        this->name_of_depositor = name_of_depositor;
        this->account_number = account_number;
        this->type_of_account = type_of_account;
        this->balance = balance;
        this->password = password;
    }
    void deposit(double amount,string pass){
        if(password==pass){
            if(amount>0){
                balance += amount;
                cout<<"Deposit amount is : "<<amount<<" Balance is : "<<balance<<endl;
            }
            else {
                cout<<"Amount must be positive"<<endl;
            }
        }
        else {
            cout<<"Password incorrect. Deposit failed"<<endl;
        }
    }
    void withdraw(double amount,string pass){
        if(password == pass){
            if(amount>0 && amount <= balance){
                balance-=amount;
                cout<<"Withdraw amount is : "<<amount<<" Balance is : "<<balance<<endl;
            }
            else if(amount>balance){
                cout<<"Insufficient balance"<<endl;
            }
            else {
                cout<<"amount must be positive "<<endl;
            }
        }
        else{
            cout<<"Incorrect password"<<endl;
        }
    }
    void display(){
        cout<<"Name is : "<<name_of_depositor<<endl;
        cout<<"Balance is : "<<balance<<endl;
    }
};

int main(){
    Bank b("Arun",12345678,"saving",40000,"patel");
    b.display();
    b.deposit(5000,"patel");
    b.withdraw(100000,"patel");
}
*/
/*
2.Write a C++ program to find the area of circle using class circle which have following details:

a. Accept radius from the user
b. Calculate the area
c. Display the result
*/
/*
#include <iostream>
#include <cmath>
using namespace std;

class Cricle{
private:
    int radius;
public:
    void insert_radius(){
        cout<<"Enter radius : ";
        cin>>radius;
    }
    double calculate_area(){
        return M_PI*radius*radius;
    }
    void result(){
        cout<<"Area of cricle is : "<<calculate_area()<<endl;
    }
};
int main(){
    Cricle c;
    c.insert_radius();
    c.result();
}
*/
/*
3.Write a C++ program to define a class employee having members Emp-id, Emp-name, basic salary and functions accept() ,
display() and calculate_salary().
Calculate DA=10 % of basic salary, HRA=1500.
net_salary = basic_salary + da + hra
Display the output.
*/
/*
#include <iostream>
using namespace std;

class Employee {
private:
    int emp_id;
    string emp_name;
    double basic_salary;

public:
    void  accept(){
        cout<<"Enter your ID : ";
        cin>>emp_id;
        cout<<"Enter your Name : ";
        cin>>emp_name;
        cout<<"Enter your Basic Salary : ";
        cin>>basic_salary;
    }
    double calculate_salary(){
        double da = 0.10*basic_salary;
        double hra = 1500;
        return basic_salary + da + hra;
    }
    void display(){
        cout<<"Employee ID : "<<emp_id<<endl;
        cout<<"Employee Name : "<<emp_name<<endl;
        cout<<"Employee Basic salary : "<<basic_salary<<endl;
        cout<<"DA : "<<0.10*basic_salary<<endl;
        cout<<"HRA : 1500"<<endl;
        cout<<"Net salary : "<<calculate_salary()<<endl;
    }
};
int main(){
    Employee e;
    e.accept();
    e.display();
}
*/
/*
4.Create a C++ class Date which contains:
private member:
   - Day
   - Month
   - Year
public:
  set_today_date()
  display_date()
  Birth_day_reminder()--> user enter a DOB, function calculate after how many days yours birthday will come,
                        if user give false input(eg: past birthdate) error message will occur.
                            */
/*
#include <iostream>
using namespace std;

int days[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
class Date {
private:
    int day;
    int month;
    int year;
    static int todayday,todaymonth,todayyear;
public:
    Date(int d,int m,int y){
        day=d;
        month=m;
        year=y;
    }
    void set_today_date(){
        cout<<"Today date is : "<<todayday<<"-"<<todaymonth<<"-"<<todayyear<<endl;
    }
    void display_date(){
        cout<<"My DOB is : "<<day<<"-"<<month<<"-"<<year<<endl;
    }
    void birth_day_reminder(){

    }
};
int Date::todayday=2;
int Date::todaymonth=9;
int Date::todayyear=2024;
int main(){
    int day;
    int month;
    int year;
    cout<<"Enter day/month/year : ";
    cin>>day>>month>>year;
    Date d(day,month,year);
    d.set_today_date();
    d.display_date();
    d.birth_day_reminder();
}
*/
/*
5. Create a class staff having fields: Staff_id , name, salary. Write a menu driven program for:
1) To accept the data
2) To display the data
3) To sort the data by name

#include <iostream>
using namespace std;

class Date {
private:
    int staff_id;
    string staff_name;
    double salary;

public:
    void accept(){
        cout<<"staff id : ";
        cin>>staff_id;
        cout<<"staff name : ";
        cin>>staff_name;
        cout<<"salary : ";
        cin>>salary;
    }
    void display_date(){
        cout<<"staff id : "<<staff_id<<"staff name : "<<staff_name<<"salary : "<<salary<<endl;
    }

};
int main(){
    Date d;
    d.set_today_date();
    d.display_date();
}
*/
/*
#include <iostream>
using namespace std;

void reverse_str(string& s){
    for(char& ch : s){
        if(ch == ' '){
            ch='$';
        }
    }
}
int main(){
    string s = "welcome to bhopal";
    reverse_str(s);
    cout<<s;
}
*/

//Write a C++ program to print all natural numbers in reverse (from n to 1).
//but with one constraint i,e if number is multiple of 5 then ignore it.
//example: n=12
//output: 12 11 9 8 7 6 4 3 2 1
/*
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    for(int i=n;i>=1;i--){
        if(i%5==0){
            continue;
        }
        cout<<i<<" ";
    }
}
*/
/*WAP to create a class Time having data member
 hour and minutes,
 member function.
 1)constructor
 2)use operator overloading (+) to add 2 time
   example:
        1st object value : 3 hours 50 mins
        2nd object value : 2 hours 20 mins
        output           : 6 hours 10 mins
 3)convert_into_minute()
    example:  2 hours 20 mins  -> 140 mins
    */
    /*
#include <iostream>
using namespace std;

class Time{
private:
    int hour;
    int minutes;
public:
    Time(int h,int m){
        hour=h;
        minutes=m;
        normalize();
    }
    void normalize() {
        if (minutes >= 60) {
            hour += minutes / 60;
            minutes = minutes % 60;
        }
    }
    Time operator + (Time& t){
        return Time(hour + t.hour, minutes+t.minutes);
    }
    int convert_into_minute(){
        return hour*60+minutes;
    }
    void display(){
        cout << hour << " hours " << minutes << " minutes" << endl;
    }
};

int main(){
    Time t1(3,50);
    Time t2(2,20);
    Time t3 = t1+t2;
    t3.display();
}
*/
