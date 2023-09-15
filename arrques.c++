#include<iostream>
using namespace std;

//Swap alternate

/*
void swapalt(int arr[],int n){
    for(int i=0;i<n;i+=2){
        if(i+1<n){
            // swap(arr[i],arr[i+1]);   // swap function is available

            int temp = arr[i];         // swap function is not available
            arr[i] = arr[i+1];
            arr[i+1]=temp;
        }
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

    swapalt(arr,n);
    printarray(arr,n);
}
*/


//Find unique element

/*
int findunique(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans = ans^arr[i];
    }
    return ans;
}


int main(){
    int n;
    cin>>n;

    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int res = findunique(arr,n);
    cout<<res;
}
*/

// Find duplicates

int findDup(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }

    for(int i=0;i<n;i++){
        ans=ans^i;
    }
    return ans;
}


int main(){
    int n;
    cin>>n;

    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int res = findDup(arr,n);
    cout<<res;

}