#include<iostream>
using namespace std;

int main(){
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;

    int total = a+b+c+d+e;
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