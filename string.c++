#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    string str1;
    string str2;
    getline(cin, str1);
    getline(cin, str2);
    cout<<str1+str2<<endl;
    str1.append(str2);
    cout<<str1<<endl;
    cout<<str1[2]<<endl;
    cout<<str2.compare(str1)<<endl;
    str1.insert(2,"Sinha");
    cout<<str1<<endl;
    cout<<str1.length()<<endl;
    cout<<str2.length()<<endl;
    cout<<str1.substr(2,6)<<endl;
    string str3 = "xyzfcb";
    sort(str3.begin(), str3.end());
    cout<<str3;


}