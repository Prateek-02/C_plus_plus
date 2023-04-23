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

/*
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
*/



/*HW ques*/

int main(){
    int total=1330;

    int value;
    cout<<"Enter the value: ";
    cin>>value;

    int temp = total/value;
    switch(value){
        case 100: cout<<"No. of 100 notes req: "<<temp<<endl;
                    break;
        case 50: cout<<"No. of 50 notes req: "<<temp<<endl;
                    break;
        case 20: cout<<"No. of 20 notes req: "<<temp<<endl;
                    break;
        case 10: cout<<"No. of 10 notes req: "<<temp<<endl;
                    break;
        case 1: cout<<"No. of 1 notes req: "<<temp<<endl;
                    break;
        default:
        cout<<"Enter a valid value"<<endl;                        
    }
}