#include<iostream>
using namespace std;


void printarray(int arr[],int size){

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int num[10];
    cout<<"Value at 8 index: "<<num[8]<<endl;
    cout<<"Everything is fine";

    cout<<endl;

    int third[15] = {2,7};

    // int m=15;

    // for(int i=0;i<n;i++){
    //     cout<<third[i]<<" ";
    // }

    printarray(third,15);


    int fourth[10] = {0};     // initializing all locations with zero
    int n=10;

   printarray(fourth,10);


    char ch[5]={'a','b','c','d','e'};
    for(int i=0;i<5;i++){
        cout<<ch[i]<<" ";
    }
}
