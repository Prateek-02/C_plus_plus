#include<iostream>
using namespace std;

int main(){
    int num = 5;
    cout<<num<<endl;

    // address of operator - &

    cout<<"adress of num is: "<<&num<<endl;

    int *p = &num;
    cout<<"Value of num is: "<<*p<<endl;  // dereferencing the num




}