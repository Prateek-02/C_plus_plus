#include<iostream>
using namespace std;

class A{
    int a;
    public:
        void setData(int a){
            this->a=a;
        }

        void getData(){
            cout<<"The value of a is :"<<a;
        }


};

int main(){
    A c;
    c.setData(5);
    c.getData();
    
    
    return 0;


}