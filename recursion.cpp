 /*
 #include <iostream>
 using namespace std;
 void f1(int n){
     if(n>5)
        return;

     f1(n+1);//head recursion
     cout<<"this is function f1(),current value is: "<<n<<endl;
 }
 int main(){
     f1(1);
 }
 */
//Write a recursive function to calculate the sum of the first n natural numbers
/*
#include <iostream>
 using namespace std;
 int sum(int n){
     if(n <= 1)
        return n;
     return n+sum(n-1);
 }
 int main(){
     int n = 10;
     int sumResult = sum(n);
     cout<<sumResult;
 }
*/
//Write a recursive function to count the number of digits in a positive integer
/*
#include <iostream>
 using namespace std;
 int digits(int n){
     if(n == 0)
        return 0;
     return 1+digits(n/10);
 }
 int main(){
     int n = 9;
     int count = digits(n);
     cout<<count;
 }
 */
//Write a recursive function to check if a string is a palindrome. A palindrome reads the same forwards and backwards.

#include <iostream>
 using namespace std;
 string palindrome(string str, int first, int last){
     if(first >= last)
        first++;
        last--;
        return "palindrome";
     palindrome(str,first+1,last-1);
     return "not palindrome";
 }
 int main(){
     string str = "arun";
     int first = str[0];
     int last = str[str.size()-1];
     string s = palindrome(str ,first,last);
     cout<<s;
 }
