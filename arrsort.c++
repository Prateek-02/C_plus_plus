#include<iostream>
using namespace std;

/*
//BUBBLE SORT

int main(){
    int n;
    cin>>n;

    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        int temp;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
*/


/*
//INSERTION SORT

int main(){
    int n;
    cin>>n;

    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i=1;i<n;i++){
        int temp = arr[i];
        int j;
        for(j=i-1;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
*/


//SELECTION SORT

int main(){
    int n;
    cin>>n;

    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<n;i++){
        int min = i;
        for(int j=i+1;j<n;j++){
            if(arr[min]>arr[j]){
                min = j;
            }
        }
        int temp = arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}