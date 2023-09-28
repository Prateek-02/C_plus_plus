#include<iostream>
#include<stack>
using namespace std;

// Reverse string

int main(){

    string str = "Prateek";
    stack<char> st;

    for(int i=0;i<str.length();i++){
        char c = str[i];
        st.push(c);
    }

    string ans = "";

    while(!st.empty()){
        char c = st.top();
        ans.push_back(c);

        st.pop();
    }

    cout<<"Reversed string is: "<<ans;
    return 0;
}