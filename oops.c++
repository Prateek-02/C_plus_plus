#include<iostream>
#include<string.h>
using namespace std;

class Hero{

    //properties
    private:                           
    int health;

    public:     
    char *name;                    
    char level;

    //constructor
    Hero(){
        cout<<"constructor called"<<endl;
        name = new char[100];
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

    //copy constructor
    // Hero(Hero& temp){
    //     cout<<"Copy constructor called"<<endl;
    //     this->health = temp.health;
    //     this->level = temp.level;
    // }

    void print(){
        cout<<endl;
        cout<<"[Name: "<<this->name<<",";
        cout<<" Health: "<<this->health<<",";
        cout<<" Level: "<<this->level<<"]"<<endl;
        cout<<endl;
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

    void setname(char name[]){
        strcpy(this->name,name);
    }
};



int main(){
  
    Hero hero1;
    hero1.sethealth(50);
    hero1.setlevel('D');
    char name[7] = "Babbar";
    hero1.setname(name);

    hero1.print();

    //use default copy constructor

    Hero hero2(hero1);
    hero2.print();

    hero1.name[0] = 'G';
    hero1.print();
    hero2.print();

















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