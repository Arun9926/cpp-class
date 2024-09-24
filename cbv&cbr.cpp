/*
#include <iostream>
using namespace std;

void func(int a, int b){
    int temp = a;
    a=b;
    b=temp;
}

int main(){
    int x=10;
    int y=5;
    cout<<"Before swap = "<<x<<" "<<y<<endl;
    func(x,y);
    cout << "After swap = " <<x<< " "<<y<< endl;
}
*/
/*
#include <iostream>
using namespace std;

void swap(int *a, int *b){
 int temp = *a;
 *a = *b;
 *b = temp;
}

int main() {
 int x = 5;
 int y = 10;
 cout << "Before swap: x = " << x << " , y = " << y << endl;
 swap(&x, &y);
 cout << "After swap: x = " << x << ", y = " << y << endl;
 return 0;
}
*/
// s="we are here to learn";
//output="we$are$here$to$learn";//
//coll by value.
/*
#include <iostream>
#include <string>
using namespace std;

void space(string str) {
    for (int i=0;i<str.size();i++) {
        if (str[i] == ' ') {
            str[i] = '$';
        }
    }
    cout << "Modified string: << str <<endl;
}

int main() {
    string str = "we are here to learn";
    cout << "Original string: " << str <<endl;
    space(str);
    cout << "updated string: " << str <<endl;
    return 0;
}
*/

//coll by refrence.
#include <iostream>
#include <string>
using namespace std;

void space(string &str) {
    for (int i=0;i<str.size();i++) {
        if (str[i] == ' ') {
            str[i] = '$';
        }
    }
    cout << "Modified string: " << str <<endl;
}

int main() {
    string str = "we are here to learn";
    cout << "Original string: " << str <<endl;
    space(str);
    cout << "updated string: " << str <<endl;
    return 0;
}
