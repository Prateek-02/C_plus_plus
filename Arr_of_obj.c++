#include<iostream>
using namespace std;

class Shop{
    int id;
    float price;
    public:
        void setData(int a,float b){
            id=a;
            price=b;
        }

        void getData(){
            cout<<"Code of this item is: "<<id<<endl;
            cout<<"Price of this item is: "<<price<<endl;
        }

};

int main(){
    int size = 3;
    Shop *ptr = new Shop [size]; //to set data
    Shop *ptrtemp = ptr;   // to get data
    int p,i;
    float q;
    for(i=0;i<size;i++){
        cout<<"Enter Id and Price of item "<<i+1<<endl;
        cin>>p>>q;
        ptr->setData(p,q);
        ptr++;
    }

    for(int i=0;i<size;i++){
        cout<<"Item num: "<<i+1<<endl;
        ptrtemp->getData();
        ptrtemp++;
    }


    return 0;
}
