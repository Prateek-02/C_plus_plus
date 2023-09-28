#include<iostream>
#include<stack>
#include<string>
using namespace std;

/*
int main(){

    stack<int> s;

    s.push(2);
    s.push(3);
    s.push(4);

    s.pop();

    cout<<"Element at top is: "<<s.top();
    cout<<endl;

    if(s.empty()){
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"stack is not empty"<<endl;
    }

    cout<<"size of stack is: "<<s.size();
}
*/



//Stack implementation using array

/*
class Stack{

    //Properties

    public:
    int *arr;
    int top;
    int size;

    //behaviour

    Stack(int size){
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if(size-top>1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"Stack overflow"<<endl;
        }
    }

    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"stack underflow"<<endl;
        }
    }

    int peek(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout<<"stack is empty"<<endl;
            return -1;
        }
    }

    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){

    Stack st(5);

    st.push(22);
    st.push(43);
    st.push(44);
 

    cout<<st.peek()<<endl;
    st.pop();

    cout<<st.peek()<<endl;
    st.pop();

    cout<<st.peek()<<endl;
    st.pop();

    cout<<st.peek()<<endl;

    if(st.isEmpty()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }

    return 0;
}
*/


// Two stacks using 1 array

class TwoStack{
    public:
    int *arr;
    int top1;
    int top2;
    int size;


    TwoStack(int size){
        this -> size = size;
        arr = new int[size];
        top1=-1;
        top2=size;
    }

    void push1(int element){
        if(top2-top1>1){
            top1++;
            arr[top1] = element;
        }
        else{
            cout<<"Stack overflow"<<endl;
        }
    }

    void push2(int element){
        if(top2-top1>1){
            top2--;
            arr[top2] = element;
        }
        else{
            cout<<"Stack overflow"<<endl;
        }
    }

    int pop1(){
        if(top1>=0){
            int ans = arr[top1];
            top1--;
            return ans;
        }
        else{
            cout<<"Stack underflow"<<endl;
        }
    }

    int pop2(){
        if(top2<size){
            int ans = arr[top2];
            top2++;
            return ans;
        }
        else{
            return -1;
        }
    }

};

int main(){
    TwoStack st(5);

    st.push1(1);
    st.push1(2);
    st.push1(3);

    st.push2(4);
    st.push2(5);

    cout<<st.pop1()<<endl;
    cout<<st.pop1()<<endl;
    cout<<st.pop1()<<endl;
    cout<<st.pop2()<<endl;
    cout<<st.pop2()<<endl;

    return 0;

}