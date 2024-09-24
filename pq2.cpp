#include <iostream>
#include <string>
using namespace std;

int main() {
int a;
cout<<"Enter your number = ";
cin>>a;
string result = (a>0) ? "positive" : "negative";
cout<<result;
}
