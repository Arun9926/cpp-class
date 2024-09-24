//1-> zero division error :
 //   int a=23,b=0;
 //   cout<<a/b;
 //2-> dangling pointer help value access.(dynamic memory)
 //3->memory allocation fail
 //4-> infinite loop
 //5-> fragmentation fault(arr[10]-----arr[1000]).
 //6-> stack overflow.
 //==============================================================================
 //c++ handle runtime error
 //==============================================================================
 //try-throw-catch block

 //try--> code test (normal code)
 //if possible runtime error may occur then throw with the help of throw keyword.
 //catch -> spacial (function) block handling code.
 //note-> try must be return with atleast one catch.multiple catch possible.
 /*
 #include <iostream>
 using namespace std;

 int main(){
     int num,dino;
     try{
         cout<<"Enter numerator : ";
         cin>>num;
         cout<<"Enter dinominator : ";
         cin>>dino;
         if(dino==0){
            throw dino;
         }
         cout<<"Division : "<<num/(double)dino<<endl;
     }
     catch(int args){
         cout<<"You entered dinominator as : "<<args<<endl;
         cout<<"dinominator can't be zero";
     }
 }
*/
/*
#include <iostream>
 using namespace std;

 int main(){
     int n;
     int arr[n];
     try{
         cout<<"Enter n : ";
         cin>>n;
         for(int i=0;i<n;i++){
            cout<<"Enter element : ";
            cin>>arr[i];
         }
     }
     catch(int args){
         cout<<"out of index";
     }
 }
 */

 //wap ti demonstrate Eh with the of a program with the two input from a user again and again unlit user type 'E' throw in exception
 //if result of addition is going to be grater then 100.
 //if the user entered any charactor other then 'E'or'Y'.

 #include <iostream>
 using namespace std;

 int main(){
     int num1,num2;
     char choice='y';
     try{
         while(choice=='y'){
            cout<<"Enter 2 number : ";
            cin>>num1>>num2;
            if(num1+num2>100){
                throw num1+num2;
            }
            cout<<"Addition is : "<<num1+num2<<endl;
            cout<<"Do you want to continue 'y' or 'e' : ";
            cin>>choice;
            if(choice!='y' && choice!='e'){
                throw choice;
            }
         }
     }
     catch(int sum){
         cout<<"Exception : "<<sum<<" is grater the 100";
     }
     catch(char choice){
         cout<<"Exception : "<<choice<<" is not a valid choice";
     }
 }



