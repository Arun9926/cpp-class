//Write a program to take two number from user and check who is max.

/*#include <iostream>
#include <string>
using namespace std;

int main() {
int a,b;
cout<<"Enter your number a = ";
cin>>a;
cout<<"Enter your number b = ";
cin>>b;
if(a>b)
    cout<<a;
else
    cout<<b;
return 0;
}
*/

//Write a program to take input age of male or Female and check he/she is eligible for marriage or not.

/*#include <iostream>
#include <string>
using namespace std;

int main() {
int age;
char gender;
cout<<"Enter your age = ";
cin>>age;
cout<<"Enter your gender = ";
cin>>gender;
if(gender == 'M' || gender=='m'){
    if(age>=21)
    cout<<"Oh Man you are eligible for marriage";
    else
    cout<<"Not eligible for marriage";
}else if(gender=='F' || gender=='f'){
    if(age>=18)
        cout<<"hey leddy you are eligible for marriage";
    else
        cout<<"Not eligible for marriage";
}else
cout<<"no";
return 0;
}
*/

//Write a program to Take values of length and breadth of a rectangle from user ,also
//Take value of side of a square from user ,and check which area is greater.


/*#include <iostream>
using namespace std;

int main() {
int length,a;
int breadth,b;
cout<<"Enter rectangle length = ";
cin>>length;
cout<<"Enter rectangle breadth = ";
cin>>breadth;
cout<<"Enter square side a = ";
cin>>a;
cout<<"Enter square side b = ";
cin>>b;
int areaOfRectangle = length*breadth;
int areaOfSquare = a*b;
if(areaOfRectangle>areaOfSquare)
    cout<<"Rectangle area is big";
else if(areaOfRectangle==areaOfSquare)
    cout<<"Both areas are equal";
else
    cout<<"Square area is big";

return 0;
}
*/
//Write a C++ program to find maximum between three numbers

/*#include <iostream>
#include <string>
using namespace std;

int main() {
int a,b,c;
cout<<"Enter your number a = ";
cin>>a;
cout<<"Enter your number b = ";
cin>>b;
cout<<"Enter your number c = ";
cin>>c;
if((a>b) && (a>c))
    cout<<a<<" is bigger";
else if((b>a) && (b>c))
    cout<<b<<" is bigger";
    else
        cout<<c<<" is bigger";
return 0;
}
*/

//Write a C++ program to find minimum and second minimum between three numbers

/*#include <iostream>
#include <string>
using namespace std;

int main() {
int a,b,c;
cout<<"Enter your number  = ";
cin>>a;
cout<<"Enter your number  = ";
cin>>b;
cout<<"Enter your number  = ";
cin>>c;
int min_num, second_min;
    min_num = a;
    if (b < min_num) {
        second_min = min_num;
        min_num = b;
    } else {
        second_min = b;
    }
    if (c < min_num) {
        second_min = min_num;
        min_num = c;
    } else if (c < second_min) {
        second_min = c;
    }

    cout << "Minimum number: " << min_num << endl;
    cout << "Second Minimum number: " << second_min << endl;
return 0;
}
*/
//Write a  program to input a cost of a pen and calculate 70 pens cost with some discount.
//if total pen cost greater than 1000 then we calculate 20% discount otherwise 10%.

/*#include <iostream>
#include <string>
using namespace std;

int main() {
double penCost,disscount,total_cost;
cout<<"Enter cost a penCost  = ";
cin>>penCost;
total_cost = penCost*70;
if(total_cost>1000){
    disscount = total_cost*0.20;
}else{
    disscount = total_cost*0.10;
}
double final_cost = total_cost-disscount;
cout<<"Total cost for 70 pens is = "<<total_cost<<endl;
cout<<"Discount applied "<<disscount<<endl;
cout<<"Final cost after discount is = "<<final_cost;

return 0;
}
*/

//Write a program to read the value of an integer m and display the message "ok" when m is larger than 0,
//display the message "bye" when m is 0 and display the message "done" when m is less than 0.

/*#include <iostream>
#include <string>
using namespace std;

int main() {
int m;
cout<<"Enter a value of integer m  = ";
cin>>m;
if(m>0){
    cout<<"ok";
}
else if(m==0){
    cout<<"bye";
}else{
    cout<<"done";
}

return 0;
}
*/

/*Write a program to A school has following rules for grading system:
a. Below 25 - F
b. 25 to 45 - E
c. 45 to 50 - D
d. 50 to 60 - C
e. 60 to 80 - B
f. Above 80 - A

 Ask user to enter marks and print the corresponding grade
*/

/*#include <iostream>
#include <string>
using namespace std;

int main() {
int marks;
cout<<"Enter your marks  = ";
cin>>marks;
if(marks<25){
    cout<<"F";
}else if(marks>25 && marks<45){
    cout<<"E";
}else if(marks>45 && marks<50){
    cout<<"D";
}else if(marks>50 && marks<60){
    cout<<"c";
}else if(marks>60 && marks<80){
    cout<<"B";
}else if(marks>80){
    cout<<"A";
}

return 0;
}
*/
/*Write a C program to read temperature in centigrade and display a suitable message according to the temperature state below:
Temp < 0 then Freezing weather
Temp 0-10 then Very Cold weather
Temp 10-20 then Cold weather
Temp 20-30 then Normal in Temp
Temp 30-40 then Its Hot
Temp >=40 then Its Very Hot
*/

/*#include <iostream>
#include <string>
using namespace std;

int main() {
int temp;
cout<<"Enter temperature  = ";
cin>>temp;
if(temp<=0){
    cout<<"Freezing weather";
}else if(temp>0 && temp<10){
    cout<<"Very Cold weather";
}else if(temp>10 && temp<20){
    cout<<"Cold weather";
}else if(temp>20 && temp<30){
    cout<<"Normal in Temp";
}else if(temp>30 && temp<40){
    cout<<"Its Hot";
}else if(temp>=40){
    cout<<"Very Hot";
}

return 0;
}
*/

/*Write a  program to determine eligibility for admission to a professional course based on the following criteria:
Marks in Maths >=65
Marks in Phy >=55
Marks in Chem>=50
Total in all three subject >=190
*/

/*#include <iostream>
#include <string>
using namespace std;

int main() {
int maths,phy,chem;
cout<<"Enter your maths number  = ";
cin>>maths;
cout<<"Enter your phy number  = ";
cin>>phy;
cout<<"Enter your chem number  = ";
cin>>chem;
int sumOfAllSubjects = maths+phy+chem;
cout<<"Sum of all subjects = "<<sumOfAllSubjects<<endl;
if(maths>=65 && phy>=55 && chem>=50 && sumOfAllSubjects>=190){
    cout<<"You are pass";
}else
    cout<<"You are fail";

return 0;
}
*/
//A company decided to give bonus of 5% to employee if his/her year of service is more than 5 years.
//Ask user for their salary and year of service and print the net bonus amount.


/*#include <iostream>
#include <string>
using namespace std;

int main() {
double salary,bonus;
int yearOfWorking;
cout<<"Enter your salary  = ";
cin>>salary;
cout<<"Enter your year of working  = ";
cin>>yearOfWorking;
if(yearOfWorking>5){
    bonus = salary*0.05;
    cout<<"You are eligible for a bonus "<<endl;
    cout<<"Your bonus is = "<<bonus<<endl;
}else{
    cout<<"You are not eligible for a bonus ";
}
return 0;
}
*/

/*A shop will give discount of 10% if the cost of purchased quantity is more than 1000.
Ask user for quantity
Suppose, one unit will cost 100.
Judge and print total cost for user.
*/

/*#include <iostream>
#include <string>
using namespace std;

int main() {
int quantity;
const int cost = 100;
double totalCost;
cout<<"Enter your quantity = ";
cin>>quantity;
totalCost = quantity*cost;
if(quantity>1000){
    totalCost -= totalCost*0.1;
    cout<<totalCost;
}
else
    cout<<"Total cost = "<<totalCost<<endl;

return 0;
}
*/


/*A student will not be allowed to sit in exam if his/her attendence is less than 75%.
Take following input from user
Number of classes held
Number of classes attended.
And print
percentage of class attended
Is student is allowed to sit in exam or not.
*/

/*#include <iostream>
#include <string>
using namespace std;

int main() {
double classesHeld,classesAttended;
cout<<"Enter your classes held = ";
cin>>classesHeld;
cout<<"Enter your classes attended = ";
cin>>classesAttended;
double percentage = (classesAttended / classesHeld) * 100;
cout<<"Your Attendence is = "<<percentage<<"%"<<endl;
if(percentage>=75){
    cout<<"A student will allowed to sit in exam ";
}else
    cout<<"A student will not be allowed to sit in exam ";

return 0;
}
*/


/*#include <iostream>
#include <string>
using namespace std;

int main() {
int cost;
cout<<"Enter cost price = ";
cin>>cost;
double dis;
if(cost<2000){
    dis = cost*(5.0/100);
    cout<<"Discount is = "<<dis<<endl;
    cout<<"Pay only = "<<cost-dis<<endl;
}else if(cost>=2001 && cost<=5000){
    dis = cost*(25.0/100);
    cout<<"Discount is = "<<dis<<endl;
    cout<<"Pay only = "<<cost-dis<<endl;
}else if(cost>=5001 && cost<=10000){
    dis = cost*(35.0/100);
    cout<<"Discount is = "<<dis<<endl;
    cout<<"Pay only = "<<cost-dis<<endl;
}else if(cost>=10001){
    dis = cost*(50.0/100);
    cout<<"Discount is = "<<dis<<endl;
    cout<<"Pay only = "<<cost-dis<<endl;
}

return 0;
}
*/

//Write a program to show day of week according to user input.

/*#include <iostream>
#include <string>
using namespace std;

int main() {
int num;
cout<<"Enter num = ";
cin>>num;
if(num==1){
    cout<<"Today is Monday";
}else if(num==2){
    cout<<"Today is Tuesday";
}else if(num==3){
    cout<<"Today is Wednesday";
}else if(num==4){
    cout<<"Today is Thursday";
}else if(num==5){
    cout<<"Today is Friday";
}else if(num==6){
    cout<<"Today is Saturday";
}else if(num==7){
    cout<<"Today is Sunday";
}else{
    cout<<"Invalid input";
}


return 0;
}
*/

//Write a program to check if entered character is vowel or not.

/*#include <iostream>
#include <string>
using namespace std;

int main() {
char ch;
cout<<"Enter character = ";
cin>>ch;
if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
    cout<<" Character is vowel";
}else{
    cout<<"Character is consonent";
}


return 0;
}
*/


//Write a program to check whether a number is even or odd using switch-case.

/*#include <iostream>
#include <string>
using namespace std;

int main() {
int num;
cout<<"Enter num = ";
cin>>num;
switch(num%2){
    case 0:
    cout<<"Num is even";
    break;
    case 1:
    cout<<"Num is odd";
    break;
    default:
        cout<<"Invalid input";
}


return 0;
}
*/









