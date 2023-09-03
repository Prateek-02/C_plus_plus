
#include <iostream>
using namespace std;



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
/*
inline int add(int a, int b){
    return a+b;
}

int main(){
    int x=5,y=6;
    int result = add(x,y);
    cout<<"Sum: "<<result;

    return 0;
}
*/

//Insert at beggining

/*
int main(){
    int n;
    cin>>n;

    int arr[100];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;

    cout<<"original array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int a=2;
  
    for(int i=n;i>0;i--){
        arr[i] = arr[i-1];
    }

    arr[0] = a;
    n++;

    cout<<"updated array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
*/

//Insert at a position

/*
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;

    int arr[100];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Original array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"Enter the index where you want to inser the elemnet: ";
    int index;
    cin>>index;

    cout<<"Enter the value of element: ";
    int value;
    cin>>value;


    for(int i=n;i>index;i--){
        arr[i] = arr[i-1];
    }
    arr[index]=value;
    n++;

 
    cout<<"Updated array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
*/

//Deleting a element

/*
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;

    int arr[100];

    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout"Original array: ";

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int value;
    cout<<"Enter the element you want to delete: ";
    cin>>value;

    int index;
    cout<<"Enter the index you want to delete: ";
    cin>>index;

    for(int i=index;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
    cout<<"Updated array: ";

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
*/



//INSERTION SORT
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

    for(int i=1;i<n;i++){
        int temp = arr[i];
        int j;
        for(j=i-1;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
    

    cout<<"Sorted array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
*/

//PRACITCE

// int main(){
//     int n;
//     cin>>n;

//     int arr[100];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

//     for(int i=1;i<n;i++){
//         int temp = arr[i];
//         int j;
//         for(j=i-1;j>=0;j--){
//             if(arr[j]>temp){
//                 arr[j+1]=arr[j];
//             }
//             else{
//                 break;
//             }
//         }
//         arr[j+1]=temp;
//     }
//     cout<<"Sorted array: ";
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }



// int main(){
//     int n;
//     cin>>n;

//     int arr[100];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     for(int i=1;i<n;i++){
//         int temp = arr[i];
//         int j;
//         for(j=i-1;j>=0;j--){
//             if(arr[j]>temp){
//                 arr[j+1]=arr[j];
//             }
//             else{
//                 break;
//             }
//         }
//         arr[j+1]=temp;
//     }

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }


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

    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}