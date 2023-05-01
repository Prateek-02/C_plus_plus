#include<iostream>
using namespace std;

int main(){

//Taking input

/*    
    int a;
    cin>>a;

    // cout<<"Value of n is: "<<n<<endl;

    if(a>0){
        cout<<"A is Positive"<<endl;
    }
    else{
        cout<<"A is Negative"<<endl;
    }
*/

//Check the greater number

/*
    int a,b;

    cout<<"Enter the value of a: "<<endl;
    cin>>a;

    cout<<"Enter the value of b: "<<endl;
    cin>>b;


    if(a>b){
        cout<<"A is greater"<<endl;
    }
    else{
    cout<<"B is greater"<<endl;
    }
*/

//Check whether number is +ve,-ve or 0(zero)

/*
    int a;
    cout<<"Enter the value of a: "<<endl;
    cin>>a;

    if(a>0){
        cout<<"A is +ve"<<endl;
    }
    else if(a<0){
        cout<<"A is -ve"<<endl;
    }
    else{
        cout<<"A is Zero"<<endl;
    }
*/

// Question 1

    char ch;
    cout<<"Enter character: "<<endl;
    cin>>ch;

    if(ch >= 65 && ch <= 90){
        cout<<"Upper case"<<endl;
    }
    else if(ch >= 97 && ch <= 122){
        cout<<"Lower case"<<endl;
    }
    else{
        cout<<"Numeric"<<endl;
    }

}