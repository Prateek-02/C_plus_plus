#include<iostream>
using namespace std;

//Finding max and min elements
/*
int getmin(int arr[],int n){
    int min = INT32_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}
int getmax(int arr[],int n){
    int max = INT32_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

int main(){

    int n;
    cin>>n;

    int arr[100];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Maximum value is: "<<getmax(arr,n)<<endl;
    cout<<"Minimum value is: "<<getmin(arr,n)<<endl;


}
*/


//Finding sum of all elements of an array

int main(){
    int n;
    cin>>n;

    int arr[10];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int sum=0;
    for(int i=0;i<n;i++){
        sum+= arr[i];
    }
    cout<<"Sum is: "<<sum;
}