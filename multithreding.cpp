/*
Multi threading
----------------------------------------------------------------

*/
//cpp-->1 process generate (main thread)
#include <thread>
#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;
void task1(int n){
    for(int i=1;i<n;i++){
        n=n+n*n*n;
        n++;
      this_thread::sleep_for(milliseconds(1000));
    }
    cout<<"Task 1 completed\n";
}

void task2(int n){
    for(int i=1;i<n;i++){
        n=n+n*n*n;
        n++;
        this_thread::sleep_for(milliseconds(1000));
    }
    cout<<"Task 2 completed\n";
}

int main(){
    thread t1(task1,1000);
    thread t2(task2,1000);
    t1.join();
    t2.join();
}








