#include<iostream>
#include<fstream>
using namespace std;

// Input output
/*
int main(){
    string st = "Prateek";
    string st2;

    //opening files using constructor

    // ofstream out("sample.txt");  //write operation
    // out<<st;

    //opening file using constructor and reading it
    ifstream in("sample2.txt");
    getline(in, st2);
    cout<<st2;

    return 0;
}
*/

//Program 1

/*
int main(){

    // Writing in a file
    ofstream out("sample.txt");
    string name;
    cout<<"Enter your name: ";
    getline(cin, name);
    out<<"My name is " + name;
    out.close();

    // Reading from a file
    ifstream in("sample.txt");
    string content;
    getline(in, content);
    cout<<"Content is : "<<content;
    in.close();

    return 0;
}
*/


// Program 2

int main(){
    ofstream out;
    out.open("sample.txt");
    string name;
    cout<<"Enter your name: ";
    getline(cin, name);
    out<<"My name is " + name;
    out<<" I am persuing Btech in CSE from Lovely Professional University";
    out.close();

    ifstream in;
    in.open("sample.txt");
    string content;
    // getline(in, content);
    // cout<<content;

    while(in.eof()==0){
        getline(in, content);
        cout<<content;
    }
    in.close();


    return 0;
}