
#include <iostream>
using namespace std;

/*
int main(){
    int n;
    cin>>n;
    
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    cout<<endl;
    
    int temp,ptr;
    for(int i=1;i<n;i++){
        temp=arr[i];
        ptr = i-1;
        while(temp<arr[ptr] && ptr!=-1){
            arr[ptr+1]=arr[ptr];
            ptr-=1;
        }
        arr[ptr+1]=temp;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}*/


int main(){
    int n;
    cin>>n;

    int arr[n];

    for( int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
}