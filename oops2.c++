#include<iostream>
using namespace std;

class Student{
    private:
    string name;
    int age;
    int height;

    public:
    int getAge(){
        return age;
    }
    int getHeight(){
        return height;
    }
    string getName(){
        return name;
    }

    void setAge(int a){
        age = a;
    }
    void setHeight(int h){
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
    obj1.setHeight(5);
    cout<<"Name is: "<<obj1.getName()<<endl;
    cout<<"Age is: "<<obj1.getAge()<<endl;
    cout<<"Height is: "<<obj1.getHeight()<<"ft"<<endl;

}