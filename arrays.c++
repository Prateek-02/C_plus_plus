#include<iostream>
using namespace std;


void printarray(int arr[],int size){

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int num[10];
    cout<<"Value at 1 index: "<<num[1]<<endl;
    cout<<"Everything is fine";

    cout<<endl;

    int third[15] = {2,7};

    int n=15;

    // for(int i=0;i<n;i++){
    //     cout<<third[i]<<" ";
    // }

    printarray(third,15);
}
