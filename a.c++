
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

/*
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
*/

/*

Array Merging

int main(){
    int n,m;
    cout<<"enter n: ";
    cin>>n;
    int arr1[n];
    cout<<"Enter the elements of 1st array: ";
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }

    cin>>m;
    cout<<"enter m: ";
    int arr2[m];
    cout<<"Enter the elements: ";
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }

    int merged = n+m;
    int arr3[merged];

    for(int i=0;i<n;i++){
        arr3[i] = arr1[i];
    }

    for(int i=0;i<m;i++){
        arr3[n+i] = arr2[i];
    }

    for(int i=0;i<merged;i++){
        cout<<arr3[i]<<" ";
    }
   
}
*/


// INLINE Function

inline int add(int a, int b){
    return a+b;
}

int main(){
    int x=5,y=6;
    int result = add(x,y);
    cout<<"Sum: "<<result;

    return 0;
}
