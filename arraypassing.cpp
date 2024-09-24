//passing array in a function
//access element of array with the help of pointer.
/*
#include <iostream>
using namespace std;

void increment_10(int arr[], int size){
    for(int i=0;i<size;i++){
        arr[i]=arr[i]+10;
    }
}

int main(){
    int arr[] = {34,5,66,7,8,8};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    increment_10(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
*/
//wap to increment all the element of array using pointer.
#include <iostream>
using namespace std;

void increment_10(int *p, int size){
    for(int i=0;i<size;i++){
        *(p + i) += 10;
    }
}

int main(){
    int arr[] = {34,5,66,7,8,8};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    increment_10(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
