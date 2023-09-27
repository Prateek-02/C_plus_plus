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

int main(){
    ofstream out("sample.txt");
    string name;
    cout<<"Enter your name: ";
    cin>>name;
    out<<"My name is " + name;

    return 0;
}