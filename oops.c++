#include<iostream>
using namespace std;

class Hero{

    //properties
    private:                           
    int health;

    public:                         
    char level;

    //constructor
    Hero(){
        cout<<"constructor called"<<endl;
    }

    //parameterised coonstructor
    Hero(int health){
        cout<<"this -> "<<this<<endl;
        this->health = health;
    }
    Hero(int health,char level){
        this-> level = level;
        this-> health = health;
    }

    void print(){
        cout<<"health: "<<this->health<<endl;
        cout<<"level: "<<this->level<<endl;
    }

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
  
    Hero anish(70, 'C');
    anish.print();

    // copy constructor
    Hero r(anish);
    r.print();















    // //object create statically
    // Hero sachin(10);
    // cout<<"Address of sachin: "<<&sachin<<endl;

    // //dynamically
    // Hero *h = new Hero(11);





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