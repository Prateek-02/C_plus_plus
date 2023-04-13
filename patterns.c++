#include<iostream>
using namespace std;

/*
//1st

int main(){
    int n;
    cin>>n;

    int i = 1;

    while(i<=n){
        int j = 1;
        while(j<=n){
            cout<<j<<" ";
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
}
*/


/*
//2nd

int main(){
    int n;
    cin>>n;

    int i = 1;

    while(i<=n){
        int j = 1;
        while(j<=n){
            cout<<n-j+1<<" ";
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
}
*/

/*
//3rd

int main(){
    int n;
    cin>>n;

    int i=1;
    int count=1;
     while(i<=n){
        int j = 1;
        while(j<=n){
            cout<<count<<" ";
            count+=1;
            j+=1;
        }
        cout<<endl;
        i+=1;
     }
}
*/


/*
//4th

int main(){
    int n;
    cin>>n;

    int row=1;

    while(row<=n){
        int col=1;
        while(col<=row){
            cout<<"*";
            col+=1;
        }
        cout<<endl;
        row+=1;
    }
}
*/


/*
//5th

int main(){
    int n;
    cin>>n;

    int row=1;
    while(row<=n){
        int col=1;
        while(col<=row){
            cout<<row<<" ";
            col+=1;
        }
        cout<<endl;
        row+=1;
    }
}
*/


/*
//6th
int main(){
    int n;
    cin>>n;

    int row =1;
    int count =1;

    while(row<=n){
        int col =1;
        while(col<=row){
            cout<<count<<" ";
            count+=1;
            col+=1;
        }
        cout<<endl;
        row+=1;
    }
}
*/


/*
//7th

int main(){
    int n;
    cin>>n;

    int row=1;

    while(row<=n){
        int col=1,value=row;
        while(col<=row){
            cout<<value<<" ";
            value+=1;
            col+=1;
        }
        cout<<endl;
        row+=1;
    }
}
*/


/*
//8th

int main(){
    int n;
    cin>>n;

    int row=1;
    while(row<=n){
        int col=1,value=row;
        while(col<=row){
            cout<<value<<" ";
            value-=1;
            col+=1;
        }
        cout<<endl;
        row+=1;
    }
}
*/



//9th

int main(){
    int n;
    cin>>n;

    int row=1;

    while(row<=n){
        int col=1;
        while(col<=n){
            char ch = 'A'+row-1;
            cout<<ch<<" ";
            col+=1;
        }
        cout<<endl;
        row+=1;
    }
}



