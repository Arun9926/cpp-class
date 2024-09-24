#include <iostream>
using namespace std;


int main() {
   int n,sum=0,num,count=0;
   cout<<"Enter number = ";
   cin>>n;
   for(int i=1;i<=n;i++){
    cout<<"Enter number = ";
    cin>>num;

    if(num>20 && num<40){
        sum = sum + num;
        count++;
    }
   }
   cout<<"sum = "<<sum<<endl;
   cout<<count;
   return 0;
}
