#include<iostream>
#include<array>
#include<vector>
#include<deque>
#include<list>
#include<stack>

using namespace std;

//ARRAY

/*
int main(){
    array<int,4> a = {1,2,3,4};

    int size = a.size();

    for(int i=0;i<size;i++){
        cout<<a[i]<<" "<<endl;
    }

    cout<<"Element at 2nd Index "<<a.at(2)<<endl;
    cout<<"Empty or not-> "<<a.empty()<<endl;  //It will return boolean

    cout<<"First Element-> "<<a.front()<<endl;   // To find 1st element
    cout<<"Last Element-> "<<a.back()<<endl;     // To find last element

}
*/


//VECTOR

/*
int main(){

    vector<int> v;

    vector<int> a(5,1);      // size of the vector is 5 and initialize all with 1
    cout<<"print a"<<endl;
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;

    vector<int> last(a);   // copy all the elements of a
    cout<<"print last"<<endl;
    for(int i:last){
        cout<<i<<" ";
    }
    cout<<endl;


    cout<<"Capacity-> "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Capacity-> "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity-> "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity-> "<<v.capacity()<<endl;
    cout<<"Size-> "<<v.size()<<endl;

    cout<<"Element at 2nd index "<<v.at(2)<<endl;
    cout<<"First Element-> "<<v.front()<<endl; 
    cout<<"Last Element-> "<<v.back()<<endl; 

    cout<<"before pop"<<endl;
    for(int i:v) {
        cout<<i<<" ";
    }
    cout<<endl;

    v.pop_back();

    cout<<"after pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
}
*/


//DEQUE

/*
int main(){

    deque<int> d;

    d.push_back(1);
    d.push_front(2);

    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;

    // d.pop_back();

    // for(int i:d){
    //     cout<<i<<" ";
    // }

    cout<<"print 1st index element: "<<d.at(1)<<endl;
    cout<<"First Element-> "<<d.front()<<endl; 
    cout<<"Last Element-> "<<d.back()<<endl;
}
*/


//LIST

/*
int main(){
    list <int> l;

    l.push_back(1);
    l.push_front(2);

    for(int i:l){
        cout<<i<<" ";
    }

    cout<<endl;
    cout<<"after erase: "<<endl;
    l.erase(l.begin());          // It will erase the  beggining element
    for(int i:l){
        cout<<i<<" ";
    }
}
*/


//STACK

/*
int main(){

    stack <string> s;

    s.push("Prateek");
    s.push("Raj");
    s.push("Sinha");
    
    cout<<"Top element: "<<s.top()<<endl;
    s.pop();

    cout<<"Top element: "<<s.top()<<endl;

    cout<<"size of stack "<<s.size()<<endl;
    cout<<"Emoty or not-> "<<s.empty()<<endl;
}
*/