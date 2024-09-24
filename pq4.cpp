#include <iostream>
#include <string>
using namespace std;

int main() {
int a;
cout<<"Enter your number = ";
cin>>a;
string result = (a>99 && a<1000) ? "This is three digit number" : "This is not three digit number";
cout<<result;
}
