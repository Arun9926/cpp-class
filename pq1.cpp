#include <iostream>
#include <string>
using namespace std;

int main() {
    int age;
cout << "Enter your age - ";
cin >> age;
string result = (age >= 18) ? "You are eligible to vote" : "You are not eligible to vote";
cout << result;
return 0;
}
