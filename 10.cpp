#include <iostream>
using namespace std;


int main() {
   int n,sum=0,num,even=0,odd=0;
   cout<<"Enter number = ";
   cin>>n;
   for(int i=1;i<=n;i++){
    cout<<"Enter number = ";
    cin>>num;

    if(num%2==0){
        even = even + num;
    }else{
        odd = odd + num;
    }
    sum += num;
   }
   cout<<"sum = "<<sum<<endl;
   cout<<"even sum = "<<even<<endl;
   cout<<"odd sum = "<<odd<<endl;
   return 0;
}
