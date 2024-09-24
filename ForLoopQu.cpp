/*#include <iostream>
using namespace std;


int main() {
   int n = 100;

   for(int i=1;i<=n;i++){
    if(i%5==0 || i%7==0){
        cout<<i<<endl;
    }
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


int main() {
   int n;
   cout<<"Enter your number = ";
   cin>>n;
   if(n>0){
   for(char i='A';i<='Z';i++){
    cout<<i<<endl;
    }
   }else if(n<0){
       for(char i='z';i>'a';i--){
       cout<<i<<endl;
    }
   }else {
       cout<<"a,e,i,o,u"<<endl;
   }
   return 0;
}
*/
//Write a program to print all natural numbers from 1 to n

/*#include <iostream>
using namespace std;


int main() {
   int n;
   cout<<"Enter your number = ";
   cin>>n;
   for(int i=1;i<=n;i++){
    cout<<i<<endl;
   }
   return 0;
}
*/

//Write a program to print all natural numbers in reverse
/*#include <iostream>
using namespace std;


int main() {
   int n;
   cout<<"Enter your number = ";
   cin>>n;
   for(int i=n;i>=1;i--){
    cout<<i<<endl;
   }
   return 0;
}
*/
//Write a program to print tables

/*#include <iostream>
using namespace std;


int main() {
   int n;
   cout<<"Enter number = ";
   cin>>n;
   for(int i=1;i<=10;i++){

    cout<<n<<"*"<<i<<"="<<n*i<<endl;
   }
   return 0;
}*/
//Write a program to print reverse tables

/*#include <iostream>
using namespace std;


int main() {
   int n;
   cout<<"Enter number = ";
   cin>>n;
   for(int i=10;i>=1;i--){

    cout<<n<<"*"<<i<<"="<<n*i<<endl;
   }
   return 0;
}*/
//Write a program to print all alphabets from a to z
/*#include <iostream>
using namespace std;


int main() {


   for(char i='a';i<='z';i++){

    cout<<i<<endl;
   }
   return 0;
}
*/
//Write a program to print reverse alphabets from Z to A

/*#include <iostream>
using namespace std;


int main() {


   for(char i='Z';i>='A';i--){

    cout<<i<<endl;
   }
   return 0;
}
*/
//Write a program to print all even numbers between 1 to 100

/*#include <iostream>
using namespace std;


int main() {


   for(int i=1;i<=100;i++){

    if(i%2==0)
        cout<<i<<endl;
   }
   return 0;
}
*/
//Write a program to print all odd number between 1 to 100
/*#include <iostream>
using namespace std;


int main() {


   for(int i=1;i<=100;i++){

    if(i%2!=0)
        cout<<i<<endl;
   }
   return 0;
}
*/
//Write a program to find sum of all natural numbers between 1 to n
/*#include <iostream>
using namespace std;


int main() {
int n,sum=0;
cout<<"Enter number = ";
cin>>n;
   for(int i=1;i<=n;i++){
        sum+=i;
   }
   cout<<sum<<endl;
   return 0;
}
*/
//Write a program to find sum of all even numbers between 1 to n
/*#include <iostream>
using namespace std;


int main() {
int n,sum=0;
cout<<"Enter number = ";
cin>>n;
   for(int i=1;i<=n;i++){
        if(i%2==0)
            sum+=i;
   }
   cout<<sum<<endl;
   return 0;
}
*/
//Write a program to find sum of all odd numbers between 1 to n
/*#include <iostream>
using namespace std;


int main() {
int n,sum=0;
cout<<"Enter number = ";
cin>>n;
   for(int i=1;i<=n;i++){
        if(i%2!=0)
            sum+=i;
   }
   cout<<sum<<endl;
   return 0;
}
*/
//Write a program to find the factorial value of any number
/*#include <iostream>
using namespace std;


int main() {
int n,fact=1;
cout<<"Enter number = ";
cin>>n;
   for(int i=1;i<=n;i++){
        fact = fact*i;
   }
   cout<<fact<<endl;
   return 0;
}
*/
//Write a program to find the value of one number raised to the
//power of another.
/*
#include <iostream>
using namespace std;


int main() {
int n,fact=1;
cout<<"Enter number = ";
cin>>n;
   for(int i=1;i<=n;i++){
        fact = fact*i;
   }
   cout<<fact<<endl;
   return 0;
}
*/
//write a program to reverse the given Digits

/*#include <iostream>
using namespace std;


int main() {
int n,rev;
cout<<"Enter number = ";
cin>>n;
   for( rev = 0; n != 0; n /=  10 ){
		rev = rev * 10;
		rev = rev + (n%10);
	}
	cout << "reversed number is = " << rev;
   return 0;
}
*/

//write a program to sum of its Digits
/*#include <iostream>
using namespace std;


int main() {
int n,sum,rem;
cout<<"Enter number = ";
cin>>n;
   for(sum=0;rem>0;n/=10){
		rem=n%10;
		sum=sum+rem;
	}
	cout<<"sum is = "<<sum<<endl;
   return 0;
}

*/
//write a program to Check Whether a Given Number is Prime or Not
/*
#include <iostream>
using namespace std;


int main() {
int n,c=0;
cout<<"Enter number = ";
cin>>n;
   for (int i = 2; i <= n / 2; i++){
        if (n % i == 0)
           c++;
   }
   if(c>1){
    cout<<n<<" is not prime";
   }else {
       cout<<n<<" is prime";
   }
   return 0;
}
*/

//Write a program to calculate HCF of Two given number
/*#include <iostream>
using namespace std;


int main() {
int n,m,hcf=1;
cout<<"Enter first number = ";
cin>>n;
cout<<"Enter second number = ";
cin>>m;
   for (int i = 1; i<=n || i<=m; i++){
        if(n%i==0 && m%i==0)
            hcf=i;
   }
   cout<<hcf<<endl;
   return 0;
}
*/
/*
#include <iostream>
using namespace std;
int main() {
int n,m,small;
bool hcf=false;
cout<<"Enter first number = ";
cin>>n;
cout<<"Enter second number = ";
cin>>m;
   n>m ? small=m : small=n;
   for(int i=small;i>=2;i--){
    if(n%i==0 || m%i==0)
        cout<<"HCF is = "<<i<<endl;
        hcf=true;
    break;
   }
   if(hcf==false){
   cout<<"no fector possible";
   }

   return 0;
}
*/
//write a p to swap the value of two variable with each other
/*#include <iostream>
using namespace std;


int main() {
int a,b,temp;
cout<<"Enter first number = ";
cin>>a;
cout<<"Enter second number = ";
cin>>b;
   temp=a;
   a=b;
   b=temp;

   cout<<a<<","<<b<<endl;
   return 0;
}
*/
/*#include <iostream>
using namespace std;


int main() {
int a,b;
cout<<"Enter first number = ";
cin>>a;
cout<<"Enter second number = ";
cin>>b;
   a=a+b;
   b=a-b;
   a=a-b;
   cout<<"a is "<<a<<", b is "<<b<<endl;
   return 0;
}
*/
//write a program to display fibonacci series of n terms

/*#include <iostream>
using namespace std;


int main() {
int n,n1=0,n2=1,n3;
cout<<"Enter number = ";
cin>>n;
cout<<n1<<" "<<n2<<" ";
for (int i = 1; i <= n-2; ++i) {
        n3=n1+n2;
        cout<<n3<<" ";
        n1=n2;
        n2=n3;

    }
   return 0;
}
*/
/*#include <iostream>
using namespace std;


int main() {
int n,m,result=1;
cout<<"Enter number = ";
cin>>n;
cout<<"Enter number = ";
cin>>m;
for (int i = 1; i <= m;i++) {
        result = result * n;

    }
    cout<<result;
   return 0;
}
*/

/*
#include <iostream>
using namespace std;


int main() {
int n,digit;
cout<<"Enter number = ";

cin>>n;
while(n>0){
    digit=n%10;
    n/=10;
    if(digit==7){
        cout<<"7 is present";
        break;
    }else {
        cout<<"not present";
        break;
    }
}

   return 0;
}
*/
/*
#include <iostream>
using namespace std;


int main() {
int n,rev;
cout<<"Enter number = ";
cin>>n;
   while(n>0){
    rev = n%10;

    cout<<rev;
    n/=10;
   }
   return 0;
}
*/







