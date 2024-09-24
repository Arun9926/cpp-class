/*
Defination --> it is a reusable block of code,which is written to perform specific task.
with the help of function ,we achieve
1. reusability
2. modularity
   -->  break bigger complex problem , into n small simpler problem.
   every function call get azicuted in stack memory and after return statement the memory occupied by function local variable is delocated
   function having multiple return statement.
*/
/*
#include <iostream>
using namespace std;
int calculator(int,int,string);

int main(){
    int num1,num2;
    string operation;
    cout<<"Enter 2 num = ";
    cin>>num1>>num2;
    cout<<"Enter op = ";
    cin>>operation;
    int result = calculator(num1,num2,operation);
    cout<<"result = "<<result;

}
    int calculator(int num1,int num2,string operation){
        if(operation=="add")
            return num1+num2;
        else if(operation=="sub")
            return num1-num2;
        else if(operation=="multi")
            return num1*num2;
        else if(operation=="division")
            return num1/num2;
    }
*/
//wap to findout highest number among three number.
/*#include <iostream>
using namespace std;
int bigNumber(int num1,int num2, int num3){
        if(num1>num2 && num1>num3)
            return num1;
        else if(num2>num1 && num2>num3)
            return num2;
        else if(num3>num1 && num3>num2)
            return num3;
}

int main(){
    int num1,num2,num3;
    cout<<"Enter 3 num = ";
    cin>>num1>>num2>>num3;
    int result = bigNumber(num1,num2,num3);
    cout<<result;

}
*/
//1>WAP to create a function namedaverage that is created to find out the average of 5 numbers
//parameter -->5 number
//return --->string (a message success)
/*
#include <iostream>
using namespace std;
string namedaverage(int num1,int num2, int num3, int num4, int num5){
        int avg = (num1+num2+num3+num4+num5)/5;
        return "success";
}

int main(){
    int num1,num2,num3,num4,num5;
    cout<<"Enter 5 num = ";
    cin>>num1>>num2>>num3>>num4>>num5;
    string result = namedaverage(num1,num2,num3,num4,num5);
    cout<<result;

}
*/

//2>-->Write a program to find the factorial of any number entered by user
//parameter -->int
//return --->int (or long long in case of higher number) i,e result

/*
#include <iostream>
using namespace std;
int factorial(int num){
        int fact = 1;
        for(int i=1;i<=num;i++){
            fact = fact*i;
        }
        return fact;
}

int main(){
    int num;
    cout<<"Enter num = ";
    cin>>num;
    int result = factorial(num);
    cout<<result;

}
*/

//3-->Write a program that prompts the user to input an integer and then
//outputs the number with the digits reversed.
//parameter -->int
//return --->int
/*
#include <iostream>
using namespace std;
int reverse_num(int num){
        int rev,last;
        while(num>0){
            last=num%10;
            rev = rev*10+last;
            num/=10;
        }
        return rev;
}

int main(){
    int num;
    cout<<"Enter num = ";
    cin>>num;
    int result = reverse_num(num);
    cout<<result;

}
*/

//4->WAP to print whether a number is armstrong number or not
//parameter -->int
//return --->string (a message "yes" or "no")
/*
#include <iostream>
using namespace std;
string armstrong(int num){
        int last,temp,sum=0;
        temp = num;
        while(num>0){
            last=num%10;
            sum = sum + (last*last*last);
            num/=10;
        }
        if(temp==sum){
            return "yes";
        }
        else {
            return "no";
        }
}

int main(){
    int num;
    cout<<"Enter num = ";
    cin>>num;
    string result = armstrong(num);
    cout<<result;

}
*/
//5->WAP to print whether a number is palindrome number or not
//parameter -->int
//return --->string (a message "yes" or "no")
/*
#include <iostream>
using namespace std;
string palindrome(int num){
        int last,temp,rev=0;
        temp = num;
        while(num>0){
            last=num%10;
            rev = rev*10+last;
            num/=10;
        }
        if(rev==temp){
            return "yes";
        }
        else {
            return "no";
        }
}

int main(){
    int num;
    cout<<"Enter num = ";
    cin>>num;
    string result = palindrome(num);
    cout<<result;

}
*/
//2-->Write a program that ask the user to input a positive integer.
//It should then print the multiplication table of that number.
/*
#include <iostream>
using namespace std;
void table(int num){
        for(int i=1;i<=10;i++){
            cout<<num<<"*"<<i<<"="<<num*i<<endl;
        }

}

int main(){
    int num;
    cout<<"Enter num = ";
    cin>>num;
    table(num);

}
*/
//Write a program that ask the user two input .
//print the multiplication table of that range of numbers(nesting)

//parameter -->int,int(range)
//return --->no return

/*
#include <iostream>
using namespace std;
void table(int start, int End){
        for(int j=start;j<=End;j++){
            for(int i=1;i<=10;i++){
                cout<<j<<"*"<<i<<"="<<j*i<<endl;
            }
            cout<<endl;
        }

}

int main(){
    int start,End;
    cout<<"Enter start End = ";
    cin>>start>>End;
    table(start,End);

}
*/
//4-->WAP to print all prime number in given range.
//parameter -->int,int(range)
//return --->no return
/*
#include <iostream>
using namespace std;
void prime(int start, int End){
        int flag;
        for(int i=start;i<=End;i++){
            flag=1;
            for(int j=2;j<=i/2;j++){
                if(i%j==0){
                    flag=0;
                    break;
                }
            }
            if(flag == 1){
                cout<<i<<" ";
            }
        }

}

int main(){
    int start,End;
    cout<<"Enter start End = ";
    cin>>start>>End;
    prime(start,End);

}
*/
//5-->WAP to print all armstrong number in given range.
//parameter -->int,int(range)
//return --->no return
/*
#include <iostream>
#include <math.h>
using namespace std;

void armstrong(int start, int End){
        for(int i = start; i <= End; i++){

        int sum = 0, temp, digit,len;
        temp = i;
        while(temp != 0){
            digit = temp % 10;
            sum = sum + digit*digit*digit;
            temp /= 10;
        }

        if(sum == i)
            cout << i << " ";
    }
}

int main(){
    int start,End;
    cout<<"Enter start End = ";
    cin>>start>>End;
    armstrong(start,End);
}
*/
//WAP to find the area of rectangle taking all essential input in function

#include <iostream>
using namespace std;

void areaOfRectangle(){
    int width,height;
    cout<<"Enter width height = ";
    cin>>width>>height;
    cout<<"Area of Rectangle is: "<<(width*height);
}

int main(){
    areaOfRectangle();

}
