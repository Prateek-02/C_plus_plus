#include<iostream>
using namespace std;

/*
int main(){
    int sub1,sub2,sub3,sub4,sub5;
    cin>>sub1>>sub2>>sub3>>sub4>>sub5;

    int total = sub1+sub2+sub3+sub4+sub5;
    cout<<"Total marks:"<<total<<endl;

    int per = total/5;
    cout<<"Percentage:"<<per<<endl;

    if(per>=90){
        cout<<"Grade is O"<<endl;
    }
    else if(per>=80 && per<90){
        cout<<"Grade is A+"<<endl;
    }
    else if(per>=70 && per<80){
        cout<<"Grade is A"<<endl;
    }
    else if(per>=60 && per>70){
        cout<<"Grade is B+"<<endl;
    }
    else if(per>=50 && per>60){
        cout<<"Grade is B"<<endl;
    }
    else{
        cout<<"Reappear"<<endl;
    }
}
*/


//Array

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr1[n];
    cout<<"Enter the"<< n <<"elements: ";
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr1[i]<<" ";
    }
}