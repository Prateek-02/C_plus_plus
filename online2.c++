#include<iostream>
using namespace std;

// Normal function use

/*
class Rectangle
{
    public:
    double width;
    double height;

    double calc()
    {
        return width*height;
    }
};

int main(){
    Rectangle r;
    r.width=5;
    r.height=6;

    double area = r.calc();

    cout<<"Area is: "<<area<<endl;

    return 0;
}
*/

// Inline function use

/*
class Rectangle
{
    private:
    double width;
    double height;

    public:
    inline void setNum(double w, double h){
        width = w;
        height =h;
    }

    inline double calc(){
        return width*height;
    }
};

int main(){
    Rectangle r;
    r.setNum(20.0,10.0);
    double area = r.calc();
    cout<<"Area is: "<<area<<endl;
}
*/


// Static members

/*
class Myclass{
    public:
    static int count;
    Myclass(){
        count++;
    }
    static void showCount(){
        cout<<"Count is: "<<count;
    }
};

int Myclass :: count=0;

int main(){
    Myclass obj1,obj2,obj3;

    Myclass::showCount();

    return 0;

}
*/


void greet(string name="guest",int age=20){
    cout<<"Hello "<<name<<" your age is: "<<age<<endl;;
}

int main(){
    greet();
    greet("Alice");
    greet("Bob",30);
    
    return 0;
}