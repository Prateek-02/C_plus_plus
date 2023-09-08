#include<iostream>
using namespace std;


/*
int main(){
    int num = 5;
    cout<<num<<endl;

    // address of operator - &

    cout<<"adress of num is: "<<&num<<endl;
    int *p = &num;
    cout<<"adress of num is: "<<p<<endl;
    cout<<"Value of num is: "<<*p<<endl;  // dereferencing the num

    double d = 4.3;
    double *p2 = &d;

    cout<<"adress of d is: "<<&d<<endl;
    cout<<"adress of d is: "<<p2<<endl;
    cout<<"value of d is: "<<*p2<<endl;

    cout<<"Size of integer is: "<<sizeof(num)<<endl;
    cout<<"Size of pointer is: "<<sizeof(p)<<endl;
    cout<<"Size of pointer is: "<<sizeof(p2)<<endl;

}
*/


int main(){

    int num =5;
    int a =num;
    a++;

    cout<<num<<endl;

    int *p = &num;
    cout<<"before: "<<num<<endl;
    (*p)++;
    cout<<"After: "<<num<<endl;

    // copying a pointer
    int *q=p;
    cout<<p<<"-"<<q<<endl;
    cout<<*p<<"-"<<*q<<endl;


    // important concept

    int i=3;
    int *t = &i;
    *t = *t +1;
    cout<<*t<<endl;
    cout<<"before t "<<t<<endl;
    t = t+1;
    cout<<"after t "<<t<<endl;
}