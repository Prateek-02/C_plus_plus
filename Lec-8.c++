#include<iostream>
using namespace std;

/*
int main(){

    int ch='1';

    cout<<endl;
    switch(ch){

        case 1: cout<<"First"<<endl;
                break;
        case '1': cout<<"Character one"<<endl;
                break;

        default: cout<<"It is default case"<<endl;        
    }
}
*/



/* Mini Calculator*/

int main(){
    int a,b;
    cout<<"Enter the value of a: ";
    cin>>a;

    cout<<"Enter the value of b: ";
    cin>>b;

    char op;
    cout<<"Enter the operation: ";
    cin>>op;

    switch(op){
        case '+': cout<<"a+b: "<<(a+b)<<endl;
                    break;

        case '-': cout<<"a-b: "<<(a-b)<<endl;
                    break;

        case '*': cout<<"a*b: "<<(a*b)<<endl;
                    break;

        case '/': cout<<"a/b: "<<(a/b)<<endl;
                    break;

        case '%': cout<<"a%b: "<<(a%b)<<endl;
                    break;

        default:
        cout<<"Enter a valid operation"<<endl;
    }
}