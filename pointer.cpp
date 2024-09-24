
//--->It is special variable, in which we store the address of some other variable, it is very important topic.

//some application:
//1.whenever we used dynamic memory, we have to use pointer
//2.to establish connection between the related memory block (eg.linked list) we have to use pointer.
//3.in polymorphism, inside virtual table.
//memory management .(memory allocation - deallocation).
//sentex of pointer variable --> data_type * pointer_name;
/*
 #include <iostream>
 using namespace std;

 int main(){
     int number = 90;
     double marks = 34.65;
     char choice='t';


     int * p1 = &number;
     double * p2= &marks;
     cout<<&number;
     *p1 = *p1+10;
     cout<<number<<" "<<*p1;
 }
 */
/* #include <iostream>
 using namespace std;

 int main(){
     int number = 90;
     int number1 = 60;



     int * p1 = &number;
     int * p2= &number1;
     if(*p1>*p2){
        cout<<*p1;
     }
     else {
        cout<<*p2;
     }
 }
 */
 /*
 #include <iostream>
 using namespace std;

 int main(){
     int number = 90;
     int number1 = 60;

     int *p1 = &number;
     int *p2 = &number1;
     cout<<*p1+*p2;
 }
*/
#include <iostream>
 using namespace std;

 int main(){
     int number1 = 90;
     int number2 = 88;

     int *p1 = &number1;
     int *p2 = &number2;
     cout<<"Address of number 1 :"<<p1<<endl;
     cout<<"Address of number 2 :"<<p2<<endl;
     //p1 = p1+1;
     cout<<"Address of number 1 :"<<p1<<endl;
     p1 = p1-1;
     cout<<"Address of number 2 :"<<p2<<endl;
     cout<<*p1+*p2;
 }
