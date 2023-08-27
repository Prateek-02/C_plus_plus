#include<iostream>
using namespace std;


/*
// ENCAPSULATION

class Student{
    private:
    string name;
    int age;
    double height;

    public:
    int getAge(){
        return age;
    }
    double getHeight(){
        return height;
    }
    string getName(){
        return name;
    }

    void setAge(int a){
        age = a;
    }
    void setHeight(double h){
        height = h;
    }
    void setName(string n){
        name = n;
    }
};

int main(){
    Student obj1;
    obj1.setName("Rahul");
    obj1.setAge(18);
    obj1.setHeight(5.6);
    cout<<"Name is: "<<obj1.getName()<<endl;
    cout<<"Age is: "<<obj1.getAge()<<endl;
    cout<<"Height is: "<<obj1.getHeight()<<"ft"<<endl;
    return 0;
}
*/



// INHERITANCE

/*
class Human{
    public:
    double height;
    int weight;
    int age;

    public:
    double getHeight(){
        return height;
    }
    int getWeight(){
        return weight;
    }
    int getAge(){
        return age;
    }

    void setHeight(double h){
    height = h;
    }
    void setWeight(int w){
        weight = w;
    }
    void setAge(int a){
        age = a;
    }
};

class Male: public Human{          // Now we can access all the properties of Human class through Object of Male class
    public:
    string color;

    void sleep(){
        cout<<"Male sleeping";
    }
};

int main(){

    Male obj1;
    /*
    cout<<obj1.age<<endl;
    cout<<obj1.weight<<endl;
    cout<<obj1.height<<endl;
    cout<<obj1.color<<endl;
    */
/*
    obj1.setHeight(5.8);
    obj1.setWeight(70);
    obj1.setAge(20);
    cout<<"Height: "<<obj1.getHeight()<<endl;
    cout<<"Weight: "<<obj1.getWeight()<<endl;
    cout<<"Age: "<<obj1.getAge()<<endl;
    obj1.sleep();

    return 0;
}
*/

// Heirarchical inhertance

class A{
    public:
    void func1(){
        cout<<"inside function 1"<<endl;
    }
};

class B: public A{
    public:
    void func2(){
        cout<<"Inside function 2"<<endl;
    }
};

class C: public A{
    public:
    void func3(){
        cout<<"Inside function 3";
    }
};

int main(){
    A obj1;
    obj1.func1();

    B obj2;
    obj2.func1();
    obj2.func2();

    C obj3;
    obj3.func1();
    obj3.func3();

}