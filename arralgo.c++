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

/*
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
*/


//Linear search

/*
int main(){
    int n;
    cin>>n;

    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int target;
    cin>>target;

    int found=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            found=i;
            break;
        }
    }
    if(found!=-1){
        cout<<"Element found at index: "<<found;
    }
    else{
        cout<<"Element not found";
    }
}
*/


// Linear search using function

/*
bool search(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}

int main(){
    int n;
    cin>>n;

    int arr[100];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int key;
    cin>>key;

    bool found = search(arr,100,key);

    if(found){
        cout<<"Key is present";
    }
    else{
        cout<<"Key is absent";
    }
}
*/

//Reverse array

/*
int main(){
    int n;
    cin>>n;

    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Original array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    cout<<endl;

    cout<<"Reversed array: ";
    for(int i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
}
*/

// reverse using function

void reverse(int arr[],int n){
    int start=0;
    int end=n-1;

    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cin>>n;

    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    reverse(arr,n);

    printarray(arr,n);
}
