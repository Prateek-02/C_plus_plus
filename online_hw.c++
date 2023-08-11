#include<iostream>
using namespace std;

/*
int main(){
    int sub1,sub2,sub3,sub4,sub5;
    cin>>sub1>>sub2>>sub3>>sub4>>sub5;

    int total = sub1+sub2+sub3+sub4+sub5;
    cout<<"Total marks:"<<total<<endl;

    int per = total/5;
    cout<<"Percentage:"<<per<<endl;

    if(per>=90){
        cout<<"Grade is O"<<endl;
    }
    else if(per>=80 && per<90){
        cout<<"Grade is A+"<<endl;
    }
    else if(per>=70 && per<80){
        cout<<"Grade is A"<<endl;
    }
    else if(per>=60 && per>70){
        cout<<"Grade is B+"<<endl;
    }
    else if(per>=50 && per>60){
        cout<<"Grade is B"<<endl;
    }
    else{
        cout<<"Reappear"<<endl;
    }
}
*/


//Array

/*
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr1[n];
    cout<<"Enter the"<< n <<"elements: ";
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr1[i]<<" ";
    }
}
*/

//insertion

/*
int main(){
    int n,index,value;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr1[n];
    cout<<"Enter the "<< n <<" elements: ";
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }

    cout<<"Enter the index where you want to insert the value: ";
    cin>>index;

    cout<<"Enter the value you want to insert: ";
    cin>>value;


    for(int i=n;i>=index-1;i--){
        arr1[i+1]=arr1[i];
    }

    arr1[index-1] = value;

    for(int i=0;i<=n;i++){
        cout<<arr1[i]<<" ";
    }
}
*/


//Deletion

/*
int main(){
    int n,index;
    cout<<"enter the size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the "<<n<<" Elements: ";

    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 

    cout<<"Original array: ";

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    
    cout<<"Enter the index to be deleted: ";
    cin>>index;

    for(int i=index;i<=n-1;i++){
        arr[i] = arr[i+1];
    }

    cout<<"New array: ";

    for(int i=0;i<n-1;i++){
        cout<<arr[i]<<" ";
    }
}
*/

// Linear search

int main(){
    int arr[6] = {12,13,14,15,16,17};
    int target;
    cin>>target;

    for(int i=0;i<6;i++){
        if(arr[i]==target){
            cout<<"Found at index: "<<i<<endl;
            break;
        }
        else{
            cout<<"Not found"<<endl;
        }
    }
}