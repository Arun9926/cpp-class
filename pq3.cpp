#include <iostream>
#include <string>
using namespace std;

int main() {
int a,b;
cout<<"Enter your number = ";
cin>>a;
cout<<"Enter your number = ";
cin>>b;
string result = (a==b) ? "equal" : "not equal";
cout<<result;
}
