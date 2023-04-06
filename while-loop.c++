#include<iostream>
using namespace std;


int main(){

//Sum of n natural numbers    

/*
    int n;
    cin>>n;

    int i = 1;
    int sum = 0;

    while(i<=n){
        cout<<i<<" ";
        sum = sum+i;
        i+=1;
    }
    cout<<"\n"<<sum<<endl;
*/

//Find sum of all even numbers

/*
    int n;
    cin>>n;

    int i = 1;
    int sum = 0;

    while(i<=n){
        if(i%2==0){
            sum = sum+i;
        }
        i+=1;
    }
    cout<<sum<<endl;
*/

//check prime or not

/*
    int n;
    cin>>n;

    int i = 2;

    while(i<n){
        if(n%i==0){
            cout<<"Not prime for: "<<i<<endl;
        }
        else{
            cout<<"Prime for: "<<i<<endl;
        }
        i+=1;
    }
*/

//Pattern printing

/*
    int n;
    cin >> n;

    int i =1;

    while(i<=n){
        int j =1;
        while(j<=n){
            cout<<"*";
            j = j+1;
        }
        cout<<endl;
        i = i+1;
    }
*/


    int n;
    cin>>n;

    int i = 1;

    while(i<=n){

        int j = 1;
        while(j<=n){
            cout<<i;
            j = j+1;
        }
        cout<<endl;

        i = i+1;
    }



}
