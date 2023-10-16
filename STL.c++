#include<iostream>
#include<array>
#include<vector>
#include<deque>
#include<list>
#include<stack>
#include<queue>
#include<set>
#include<map>
#include<algorithm>

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


//QUEUE

/*
int main(){

    queue<string> q;

    q.push("Prateek");
    q.push("Raj");
    q.push("Sinha");

    cout<<"First element: "<<q.front()<<endl;
    cout<<"Last element: "<<q.back()<<endl;
    q.pop();
    cout<<"First element: "<<q.front()<<endl;
}
*/


//PRIORITY QUEUE

/*
int main(){
    //max heap

    priority_queue<int> maxi;

    //min - heap

    priority_queue<int,vector<int>, greater<int> > mini;

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);

    int n = maxi.size();
    for(int i=0;i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;

    mini.push(5);
    mini.push(1);
    mini.push(3);
    mini.push(0);  
    mini.push(2);  

    int m = mini.size();
    for(int i=0;i<m;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }
}
*/


//SET      (duplicate value is ignored)

/*
int main(){

    set<int> st;

    st.insert(5);
    st.insert(1);
    st.insert(2);
    st.insert(0);

    for(int i:st){
        cout<<i<<" ";
    }
    cout<<endl;

    int x = 5;

    for(int i:st){
        if(i==x){
            cout<<"element found";
        }
    }
    cout<<endl;

    st.erase(st.begin());
    for(int i:st){
        cout<<i<<" ";
    }

    cout<<"find 5->"<<st.count(5)<<endl;     // it will check if that element is present or not
}
*/


//MAP

/*
int main(){
    map<int,string> m;

    m[1] = "Prateek";
    m[2] = "Raj";
    m[13] = "Sinha";

    m.insert({5,"Bheem"});

    cout<<"Before erasing: "<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"finding 13-> "<<m.count(13)<<endl;    // it will check if that element is present or not

    m.erase(13);

    cout<<"After erasing: "<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
}
*/


//STL ALGORITHM

int main(){

    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    cout<<"Finding 6-> "<<binary_search(v.begin(),v.end(),6)<<endl;


    cout<<"lower bound-> "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    cout<<"upper bound-> "<<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl;

    int a = 3;
    int b = 5;

    cout<<"max-> "<<max(a,b);
    cout<<endl;
    cout<<"min-> "<<min(a,b);
    cout<<endl;
    swap(a,b);
    cout<<"a-> "<<a<<" "<<"b-> "<<b<<endl;

    string ab = "abcd";
    reverse(ab.begin(),ab.end());
    cout<<"string-> "<<ab<<endl;

    rotate(v.begin(),v.begin()+2,v.end());
    cout<<"after rotating: "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"after sorting: ";
    sort(v.begin(),v.end());
    for(int i:v){
        cout<<i<<" ";
    }

}