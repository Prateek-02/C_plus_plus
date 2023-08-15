#include<iostream>
using namespace std;

class Hero{

    //properties
    private:                           
    int health;

    public:                         
    char level;

    int gethealth(){
        return health;
    }

    char getlevel(){
        return level;
    }

    void sethealth(int h){
        health = h;
    }

    void sethevel(int ch){
        level = ch;
    }
};



int main(){
    // creation of object
    Hero h1;

    cout<<"h1 health is: "<<h1.gethealth()<<endl;
    h1.sethealth(80);
    h1.level = 'A';

    cout<<"health is: "<<h1.gethealth()<<endl;
    cout<<"level is: "<<h1.level<<endl;
    // cout<<"Size: "<<sizeof(h1)<<endl;      // in case of empty class 1 byte of memory is allocated
}