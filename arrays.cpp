//Arrays--> whenever be want to process (n)multipal data elements ,of same type it is de to use in arrya intate of n diffrent varibales.
//process--> highest ,lowest ,serching,shorting,traberse-to go througth each element one by one.
//Arrays --> array is a collection of elements same type stored at contiguous memory location.
//int a[size];
//memory allocation-->


/*#include <iostream>
using namespace std;

int main(){
    double arr[8] = {1,2,3,'u',5,6,7.987,8};
    cout<<arr[3];
}*/
//wap to create a array of n size and perform following opration
//insersion,reverse,traversing,display,seaching,addAll,evrage,find lowest highest
/*
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n = ";
    cin>>n;
    int marks [n];
    for(int i=0;i<n;i++){
        cout<<"Enter marks of student stored at index "<<i<<":";
        cin>>marks[i];
    }
    for(int i=n-1;i>=0;i--){
        cout<<"marks of student stored at index "<<i<<":"<<marks[i]<<endl;
    }
}
*/
/*
#include <iostream>
using namespace std;

int main(){
    int n,sum=0;
    cout<<"Enter n = ";
    cin>>n;
    int marks [n];
    for(int i=0;i<n;i++){
        cout<<"Enter marks = ";
        cin>>marks[i];
    }
    for(int i=0;i<n;i++){
        cout<<marks[i]<<" ";
        sum += marks[i];

    }
    cout<<"addition = "<<sum<<endl;
    cout<<"average = "<<sum/(float)n<<endl;
}
*/
/*
#include <iostream>
using namespace std;

int main(){
    int n,sum=0;
    cout<<"Enter n = ";
    cin>>n;
    int marks [n];
    for(int i=0;i<n;i++){
        cout<<"Enter marks = ";
        cin>>marks[i];
    }
    for(int i=0;i<n;i++){
        if(marks[i]%2==0){
            sum += marks[i];
            cout<<marks[i]<<" ";
        }

    }
    cout<<"even number addition = "<<sum<<endl;

}*/
/*
#include <iostream>
using namespace std;

int main(){
    int n,sum=0;
    cout<<"Enter n = ";
    cin>>n;
    int marks [n];
    for(int i=0;i<n;i++){
        cout<<"Enter marks = ";
        cin>>marks[i];
    }
    for(int i=0;i<n;i++){
        if(marks[i]%2!=0){
            sum += marks[i];
            cout<<marks[i]<<" ";
        }

    }
    cout<<"odd number addition = "<<sum<<endl;

}
*/
/*
#include <iostream>
using namespace std;

int main(){
    int n,c;
    cout<<"Enter n = ";
    cin>>n;
    int marks[n];
    for(int i=0;i<n;i++){
        cout<<"Enter marks = ";
        cin>>marks[i];
    }
    for(int i=0;i<n;i++){
        if(marks[i]%2 != 0)
            c++;
    }
    cout<<"odd number count is = "<<c<<endl;
}*/
//WAP to find the number of students who have filed to exam.
/*
#include <iostream>
using namespace std;

int main(){
    int n=8,c;
    int marks[n]={37,44,5,67,87,36,23,39};
    for(int i=0;i<n;i++){
        cout<<marks[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        if( marks[i]<40)
            cout<<"failed student index : "<<i<<" marks is = "<<marks[i]<<endl;

    }

}
*//*
#include <iostream>
using namespace std;

int main(){
    int n=8,temp;
    int marks[n]={37,44,5,67,87,36,23,39};
    for(int i=0;i<n;i++){
        cout<<marks[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        temp = marks[0];
        marks[0] = marks[n-1];
        marks[n-1] = ;

    }
    for(int i=0;i<n;i++){
        cout<<marks[i]<<" ";
    }

}*/
//WAP to find a highest and second highest number in a array
/*#include <iostream>
using namespace std;

int main(){
    int n=8,highest;
    int marks[n]={37,44,5,67,87,36,23,39};
    for(int i=0;i<n;i++){
        cout<<marks[i]<<" ";
    }
    cout<<endl;
    highest = marks[0];
    for(int i=1;i<n;i++){
        if(highest<marks[i]){
            highest=marks[i];
        }
    }
    cout<<highest;
}
*/
/*
#include <iostream>
using namespace std;

int main(){
    int n=8,lowest;
    int marks[n]={37,44,5,67,87,36,23,39};
    for(int i=0;i<n;i++){
        cout<<marks[i]<<" ";
    }
    cout<<endl;
    lowest = marks[0];
    for(int i=0;i<n;i++){
        if(lowest>marks[i]){
            lowest=marks[i];
        }
    }
    cout<<lowest;
}*/
/*
#include <iostream>
using namespace std;

int main(){
    int n=8,secondHigh,highest;
    int marks[n]={37,44,5,67,87,36,23,39};
    for(int i=0;i<n;i++){
        cout<<marks[i]<<" ";
    }
    cout<<endl;
    if(marks[0]>marks[1]){
        highest = marks[0];
        secondHigh = marks[1];
    }else {
        highest = marks[1];
        secondHigh = marks[0];
    }
    for(int i=2;i<n;i++){
        if(highest<marks[i]){
            secondHigh=highest;
            highest = marks[i];
        }
    }
    cout<<"Second highest element is = "<<secondHigh;
}
*/
/*
#include <iostream>
using namespace std;

int main(){
    string key;
    string name[5]={"ajay","vikas","sumit","vikas","danish"};
    cout<<"enter key = ";
    cin>>key;
    bool found = false;
    for(int i=0;i<5;i++){
        if(name[i] == key){
            cout<<"key present at index "<<i<<endl;
            found = true;
        }
    }
    if(found == false){
        cout<<"result: not found ";
    }
    else {
        cout<<"result: found";
    }
}
*/
//WAP to display all unique elements of an array.
/*
#include <iostream>
using namespace std;

int main(){
    int arr[8] = {1,2,2,4,4,6,8,8};
    int uniqueArr[8],c=0;
    bool check = true;

    for(int i=0;i<8;i++){
            check = true;
        for(int j=0;j<c;j++){  //unique element compare
                if(arr[i]==uniqueArr[j]){
                    check = false;
                }
        }
        if(check==true){
            uniqueArr[c] = arr[i];
            c++;
        }
    }
    for(int i=0;i<c;i++){
        cout<<uniqueArr[i]<<" ";
    }
}
*/
//WAP to create an array with n even elements. (hint: use while loop instead of for)
/*#include <iostream>
using namespace std;

int main(){
    int n,i=0,temp;
    cout<<"Enter array size = ";
    cin>>n;
    int arr[n];
    while(i<n){
        cout<<"Enter even number = ";
        cin>>temp;
        if(temp%2==0){
            arr[i]=temp;
            i++;
        }
    }
    cout<<"even number array = ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
*/

//WAP to copy the elements of one array into another array.
/*
#include <iostream>
using namespace std;

int main(){

    int arr[5]={1,2,3,4,5},arr2[5];
    cout<<"main array = ";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<5;i++){
        arr2[i] = arr[i];
    }
    cout<<endl;
    cout<<"copy array = ";
    for(int i=0;i<5;i++){
        cout<<arr2[i]<<" ";
    }
}
*/
//WAP to separate odd and even integers into separate arrays.
/*
#include <iostream>
using namespace std;

int main(){

    int arr[5]={1,3,5,7,9},evenArr[5],oddArr[5],c1=0,c2=0;

    cout<<"main array = ";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<5;i++){

        if(arr[i]%2==0){
            evenArr[c1] = arr[i];
            c1++;
        }
        else {
            oddArr[c2] = arr[i];
            c2++;
        }
    }

    cout<<endl;
    cout<<"even array = ";
    for(int i=0;i<c1;i++){
        cout<<evenArr[i]<<" ";
    }

    cout<<endl;
    cout<<"odd array = ";
    for(int i=0;i<c2;i++){
        cout<<oddArr[i]<<" ";
    }
}
*/
//WAP to find how many duplicate elements are present in our array.
#include <iostream>
using namespace std;

int main(){

    int arr[6]={1,2,2,4,4,4},arr1[6],c=0;

    cout<<"Duplicate elements = ";
    for(int i=0;i<6;i++){
        if(arr1[i] !=1)
            c=1;
            for(int j=i+1; j<6; j++){
              if(arr[i]==arr[j]){
                 c++;
                 arr1[j]=1;
              }
            }
            if(c!=1)
             cout<<arr[i]<<" ";
    }
}

//WAP to find the sum of duplicate elements which are present in our array.
//(duplicate element has a frequency of more than 1)

/*
#include <iostream>
using namespace std;
int main(){

    int arr[6]={1,2,2,4,4,4},sum=0;
    cout<<"Duplicate elements = ";
    for(int i=0;i<6;i++){
        if(arr[i]==arr[i+1])
            sum +=arr[i];
    }
    cout<<sum;
}
*/
//Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
//Note that you must do this in-place without making a copy of the array.
/*
#include <iostream>
using namespace std;

int main(){

    int arr[5]={0,1,0,3,12},j=0;
    for(int i=0;i<5;i++){
        if(arr[i] != 0){
            arr[j] = arr[i];
            j++;
        }
    }
    while(j<5){
        arr[j]=0;
        j++;
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}
*/
