//write a p to print table form rang 15 to 25
/*#include <iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter number = ";
    cin>>n;
    cout<<"Enter number = ";
    cin>>m;
    for(int i=n;i<=m;i++){
        for(int j=1;j<=10;j++){
            cout<<i<<"x"<<j<<"="<<i*j<<endl;
        }
        cout<<endl;
    }


return 0;
}
*/

/*#include <iostream>
using namespace std;

int main(){
    for(int i=100;i<=300;i++){
    int n=i,last,temp,sum=0;
    temp=n;
    while(n>0){
        last = n%10;
        sum = sum*10+last;
        n/=10;
    }
    if(temp==sum){
        cout<<sum<<endl;
    }
    }



return 0;
}*/
//WAP to find the sum of first and last digit of a number.
/*#include <iostream>
using namespace std;

int main(){
    int n,last,sum=0,first;
    cout<<"Enter three digit number = ";
    cin>>n;
    last = n%10;
    while(n>0){
            first = n;
            n/=10;
    }
    sum = first + last;
    cout<<sum;
return 0;
}
*/
//
/*#include <iostream>
using namespace std;

int main(){
    int n,last;
    cout<<"Enter number = ";
    cin>>n;
    while(n>0){
        last = n%10;

        if(last==9){
        cout<<"YES"<<endl;
        break;
        }else{
            cout<<"NO"<<endl;
            break;
        }
        n/=10;
    }
return 0;
}*/

/*
#include <iostream>
using namespace std;

int main(){
    int n,last,c=0 ;
    cout<<"Enter number = ";
    cin>>n;
    while(n>0){
        last = n%10;
        c++;
        n/=10;
    }
    cout<<"Digits in number =  "<<c;
return 0;
}
*/
/*
#include <iostream>
using namespace std;

int main(){
    int n ;
    cout<<"Enter number = ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
return 0;
}
*/
/*
#include <iostream>
using namespace std;

int main(){
    int n ;
    cout<<"Enter number = ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
            cout<<"*";
        }
        cout<<endl;
    }
return 0;
}
*/
/*
#include <iostream>
using namespace std;

int main(){
    int n ;
    cout<<"Enter number = ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1;i<=n;i++){
        for(int j=n-1;j>=i;j--){
            cout<<"*";
        }
        cout<<endl;
    }


return 0;
}
*/
/*
#include <iostream>
using namespace std;

int main(){
    int n ;
    cout<<"Enter number = ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || j==1 || i==5 || j==5){
                cout<<"*";
            }else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
*/
/*
#include <iostream>
using namespace std;

int main(){
    int n ;
    cout<<"Enter number = ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}
*/
/*
#include <iostream>
using namespace std;

int main(){
    int n,star=1;
    cout<<"Enter number = ";
    cin>>n;

    for(int i=n;i>=1;i--){
        for(int j=1;j<=i-1;j++){
            cout<<" ";
        }
        for(int k=1;k<=star;k++){
            cout<<"*";
        }

        cout<<endl;
        star=star+2;
    }
    return 0;
}*/
#include <iostream>
using namespace std;

int main(){
    int n,star=1;
    cout<<"Enter number = ";
    cin>>n;

    for(int i=n;i>=1;i--){
        for(int j=1;j<=i-1;j++){
            cout<<" ";
        }
        for(int k=1;k<=star;k++){
                if(i==1 || k==1 || k==star)
                cout<<"*";
                else {
                    cout<<" ";
                }
        }

        cout<<endl;
        star=star+2;
    }
    return 0;
}
