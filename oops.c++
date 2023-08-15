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

    void setlevel(int ch){
        level = ch;
    }
};



int main(){

    Hero sachin;




    /*
    // static allocation

    Hero a;
    a.sethealth(80);
    a.setlevel('A');

    cout<<"Health is: "<<a.gethealth()<<endl;
    cout<<"level is: "<<a.level<<endl;


    // Dynamically

    Hero *b = new Hero;

    b->sethealth(70);
    b->setlevel('B');

    cout<<"Health is: "<<(*b).gethealth()<<endl;
    cout<<"level is: "<<(*b).level<<endl;
    */


   /*
    // creation of object
    Hero h1;

    cout<<"h1 health is: "<<h1.gethealth()<<endl;
    h1.sethealth(80);
    h1.level = 'A';

    cout<<"health is: "<<h1.gethealth()<<endl;
    cout<<"level is: "<<h1.level<<endl;
    cout<<"Size: "<<sizeof(h1)<<endl;      // in case of empty class 1 byte of memory is allocated
    */

}