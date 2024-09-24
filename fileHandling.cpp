//file handling
//=============================================================================
//class herarchy
//                     -----ios------
//                     |             |
//                  istream       ostream (standerd)                      ofstream objects---->
//                  |  |             |                                    ios::out --> output mode (write mode)
//                  |  ---iostream---|                                    ios::trunc ---> new data overwrite previous data
//                  |                |                                    ios::app(append) ---> preserve previous data , u can add ur
//          (file)ifstream         ofstream(file)                         content after previous contect
//                  |                |
//                  |                |
//                  ------fstream-----
/*
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream out("c++.txt");
    out.close();
}
*/
//wap to perform to some read and write opration in a file ABC.txt.
/*
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream output;
    output.open("abc.txt",ios::out|ios::app);
    output<<"aaaaaaaaaaaaaaaaaaaa\n";
    output<<"cccccccccccccccccc";
    output.close();
}
*/

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main(){
    /*
    ofstream out;
    string name,address;
    string choice;
    out.open("abc.txt",ios::out|ios::trunc);
    out<<setw(20)<<"Name"<<setw(20)<<"Address\n";
    while(1){
        cout<<"Enter your name and address : ";
        cin>>name>>address;
        out<<setw(20)<<name<<setw(20)<<address<<"\n";
        cout<<"Type 'exit' for exit ,otherwise any character : ";
        cin>>choice;
        if(choice=="exit")break;
    }
    */

    //out.close();
    ifstream input;
    string data;
    input.open("abc.txt");
    //while(getline(input,data)){
      //  cout<<data<<endl;
    //}
    while(!input.eof()){
            getline(input,data);
            cout<<data<<endl;
    }
    input.close();

}
