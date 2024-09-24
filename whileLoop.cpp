
/*#include <iostream>
using namespace std;

int main(){
    int i=20;
    while(i<100){
        cout<<"wellcome"<<endl;
        i += 20;
    }
return 0;
}
*/
//Write a loop that asks the user to enter two numbers.
//The numbers should be added and the sum displayed.
//The loop should ask the user whether he or she wishes to perform the operation again.
//If so, the loop should repeat; otherwise it should terminate.

/*#include <iostream>
using namespace std;

int main(){
    int a,b,sum=0;
    string choice="yes";

    while(choice=="yes"){
            cout<<"Enter number = ";
            cin>>a;
            cout<<"Enter number = ";
            cin>>b;
            sum = a+b;
            cout<<"sum is = "<<sum<<endl;
            cout<<"Do you want to continue type 'yes' for proceed otherwise type any character : ";
            cin>>choice;
            if(choice=="yes"){
                cout<<"ok you can proceed\n";
            }else{
                cout<<"thank you for using our service";
            }
    }
return 0;
}
*/
//write a p to determine weather a number given by user is a armstrong number or not.
/*
#include <iostream>
using namespace std;

int main(){
    int n,last,sum=0,temp;
    cout<<"Enter three digit number = ";
    cin>>n;
    temp = n;
    while(n>0){
            last = n%10;
            sum = sum +(last*last*last); //pow(last,c)
            n = n/10;
    }
    if(temp==sum){
        cout<<"Armstrong Number."<<endl;
    }else {
        cout<<"Not Armstrong Number.";
    }
return 0;
}
*/
/*
#include <iostream>
//#include <cmath>
using namespace std;

int main(){
    int n,last,sum=0,temp;
    cout<<"Enter three digit number = ";
    cin>>n;
    temp = n;
    while(n>0){
        c = n%10;

    }
    while(n>0){
            last = n%10;
            sum = sum +(last*last*last); //pow(last,c)
            n = n/10;
    }
    if(temp==sum){
        cout<<"Armstrong Number."<<endl;
    }else {
        cout<<"Not Armstrong Number.";
    }
return 0;
}
*/
/*Q.1>WAP to take input n from the user.

if n is positive,display A to Z characters
                         (ascending order)
if n is negative,display z to a  characters
                         (descending order)
if n is zero,display all vowels
                         (a,e,i,o,u)
*/
/*#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number = ";
    cin>>n;
    if(n>0){
       char ch = 'A';
        while (ch <= 'Z') {
            cout << ch << " ";
            ch++;
    }
    }else if(n<0){
            char ch = 'z';
            while(ch >= 'a'){
                cout<<ch<<endl;
                ch--;
            }
    }else{
        cout<<"a,e,i,o,u"<<endl;
    }
return 0;
}
*/

/*#include <iostream>
using namespace std;

int main(){
    int n,last,sum=0,temp;
    cout<<"Enter three digit number = ";
    cin>>n;
    temp = n;
    while(n>0){
            last = n%10;
            sum = sum +last; //pow(last,c)
            n = n/10;
    }
    cout<<sum;
return 0;
}
*/
/*#include <iostream>
using namespace std;

int main(){
    int n,last,sum=0,first;
    cout<<"Enter number = ";
    cin>>n;
    last = n%10;
    while(n>0){
            first = n;
            n/=10;
    }
    sum = first + last;
    cout<<sum;
return 0;
}
*/
//the highest fecter possible of a number is its half.
//write a p to determine the number is a prime number is not.
/*#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number = ";
    cin>>n;
    bool prime = true;
    for(int i=2; i<=n/2;i++){
        if(n%i==0){
            prime = false;
            break;
        }
    }
    if(prime==true){
        cout<<"prime number";
    }else{
        cout<<"Not prime number";
    }

return 0;
}
*/
//Write a program to check whether a character is uppercase or lowercase alphabet.

/*#include <iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter number = ";
    cin>>ch;
    if(ch>='A' && ch<='Z'){
        cout<<"character is uppercase";
    }else{
        cout<<"character is lowercase";
    }

return 0;
}
*/

/*Write a  program to input basic salary of an employee and calculate its Gross salary according
to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%
*/
/*#include <iostream>
using namespace std;

int main(){
    double basicSalary,grossSalary,hra,da;
    cout<<"Enter salary = ";
    cin>>basicSalary;
    if(basicSalary <= 10000){
        hra = 0.2*basicSalary;
        da = 0.8*basicSalary;
    }else if(basicSalary <= 20000){
        hra = 0.25*basicSalary;
        da = 0.9*basicSalary;
    }else{
        hra = 0.3*basicSalary;
        da = 0.95*basicSalary;
    }
    grossSalary = basicSalary+hra+da;
    cout<<grossSalary;

return 0;
}
*/

//Write a program to find the square root of valid number?

/*#include <iostream>
using namespace std;

int main(){
    int n,root;
    cout<<"Enter number = ";
    cin>>n;
    if(n>0)
    root = n*n;
    cout<<"square root of a number is = "<<root;


return 0;
}
*/

//Write a program to find the L.C.M of any two numbers?
/*
#include <iostream>
using namespace std;

int main(){
    int n,m,lcm;
    cout<<"Enter first number = ";
    cin>>n;
    cout<<"Enter second number = ";
    cin>>m;
    for(int i=1;i<=n || i<=m;i++){
        if(n%i==0 && m%i==0)
            lcm=i;
    }
    lcm = (n*m)/lcm;
    cout<<"LCM is = "<<lcm;

return 0;
}
*/

//Write a program to find the cube and factorial of any number using switch case ?
/*#include <iostream>
using namespace std;

int main(){
    int choice,fact=1,n;
    cout<<"Enter 1 to find cube"<<endl;
    cout<<"Enter 2 to find factorial"<<endl;
    cout<<"Enter choice = ";
    cin>>choice;
    switch(choice){
    case 1:
        cout<<"Enter number = ";
        cin>>n;
        cout<<"cube is = "<<n*n*n<<endl;
        break;
    case 2:
        cout<<"Enter number = ";
        cin>>n;
        for(int i=1;i<=n;i++){
            fact = fact*i;
        }
        cout<<"factorial is = "<<fact;
        break;
    }

return 0;
}*/

