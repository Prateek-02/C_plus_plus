#include<iostream>
#include<iomanip>
#include<istream>
#include<string>
#include<cstring>
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

/*
void greet(string name="guest",int age=20){
    cout<<"Hello "<<name<<" your age is: "<<age<<endl;;
}

int main(){
    greet();
    greet("Alice");
    greet("Bob",30);
    
    return 0;
}
*/


//Manipulators

/*
int main(){
    int num=123;
    double val = 3.14159;

    cout<<"Number: "<<num<<endl;
    cout<<"Value: "<<setprecision(4)<<val<<endl;
    cout<<setw(10)<<left<<"left"<<setw(10)<<right<<"right"<<endl;
    cout<<"Hex value: "<<hex<<num<<endl;
    cout<<"Oct value: "<<oct<<num<<endl;

    int a =8;
    cout<<setfill('*')<<setw(5)<<a<<endl;

    return 0;
}
*/

//Function overloading

/*
int add(int a,int b){
    return a+b;
}

double add(double a,double b){
    return a+b;
}

int main(){
    int sum = add(3,4);
    double doublesum = add(3.0,4.0);
    cout<<"sum: "<<sum<<endl;
    cout<<"doublesum: "<<doublesum<<endl;
}
*/

/*
class Complex{
    private:
    int real;
    int imag;

    public:
    Complex(int r=0,int i=0){
        real=r;
        imag=i;
    }
    Complex operator+(Complex const& obj){
        Complex res;
        res.real=real+obj.real;
        res.imag=imag+obj.imag;
        return res;
    }
    void print(){
        cout<<real<<" + "<<imag<<"i"<<endl;
    }
};

int main(){
    Complex c1(10,5),c2(2,4);
    Complex c3 = c1+c2;
    c3.print();
}
*/

// Constructor

/*
class construct{
    public:
    float area;
    construct(){
        area=0;
    }
    construct(int a,int b){
        area=a*b;
    }
    void disp(){
        cout<<area<<endl;
    }
};

int main(){
    construct o;
    construct o2(10,20);
    o.disp();
    o2.disp();
    construct o3(o2);
    o3.disp();
}
*/


// RECURSION

/*
int fact(int n){
    if(n<0){
        return -1;
    }
    else if(n==0){
        return (1);
    }
    else{
        return n*fact(n-1);
    }
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int res = fact(n);
    cout<<"Factorial of "<<n<<" is: "<<res;
}
*/

// Friend function

/*
class A{
    private:
    int private_val;
    protected:
    int protected_val;
    public:
    A(){
        private_val=10;
        protected_val=90;
    }
friend class B;
};
class B{
    public:
    void display(A& t){
        cout<<t.private_val<<endl;
        cout<<t.protected_val<<endl;
    }
};

int main(){
    A a;
    B b;
    b.display(a);
}
*/


/*
class base{
    private:
    int private_var;
    protected:
    int protected_var;
    public:
    base(){
        private_var=10;
        protected_var=90;
    }
    friend void func(base& obj);
};
void func(base& obj){
    cout<<"Private: "<<obj.private_var<<endl;
    cout<<"Protected: "<<obj.protected_var<<endl;
}

int main(){
    base obj1;
    func(obj1);

}
*/


// POINTERS

/*
int main(){
    int a=5;
    cout<<a<<endl;
    cout<<&(a)<<endl;
    int *p = &a;
    int **q;
    q=&p;
    cout<<*p<<endl;  // value of a
    cout<<q<<endl;   // address of p
    cout<<*q<<endl;  // address of a
    cout<<**q<<endl;  // value of a
}
*/



//STRINGS

/*
int main(){
    string str="this is c++ code";
    str.resize(5);
    cout<<str.capacity();
    cout<<str<<endl;
    char str1[6]={'h','e','l','l','o','\0'};
    cout<<str1<<endl;
    char str2[]="hi";
    cout<<str2<<endl;
    string str3("hello");
    char str4[30];
    cout<<"Enter the city: ";
    cin.get(str4,30);
    cout<<"You hav entered: "<<str4<<endl;
    cout<<strlen(str4)<<endl;
    string str5=strcat(str2,str1);
    cout<<str5<<endl;
    string str6 = "Apple";
    string str7 = "Mango";

    cout<<"Before swapping: "<<str6<<" "<<str7<<endl;
    str6.swap(str7);
    cout<<"After swapping: "<<str6<<" "<<str7<<endl;
    
}
*/



//CONSTRUCTORS

/*
// Normal constructor
class construct{
    public:
    int a,b;
    construct(){
        a=10;
        b=20;
    }
};

int main(){
    construct c;
    cout<<"a: "<<c.a<<" b: "<<c.b;
}
*/

//Parameterized constructor

class Point{
    private:
    int x,y;
    public:
    Point(int x1, int y1){
        x=x1;
        y=y1;
    }
    int getx(){
        return x;
    }
    int gety(){
        return y;
    }
};

int main(){
    Point *p = new Point(10,25) ;
    Point p1(10,15);
    cout<<"x: "<<(*p).getx()<<" b: "<<(*p).gety()<<endl;
    cout<<"x: "<<p1.getx()<<" b: "<<p1.gety()<<endl;
}