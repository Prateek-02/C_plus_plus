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

/*
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the "<<n<<" elements: ";

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Array is: ";

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    int target;
    cout<<"Enter the target element: ";
    cin>>target;

    for(int i=0;i<n;i++){
        if(arr[i]==target){
            cout<<"Element found at index: "<<i;
            break;
        }
    }
 }
 */




//Binary search

/*
int main(){
    int n;
    cout<<"Enter the number of elements in array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the "<<n<<" Elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Original array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int beg = 0;
    int end = n-1;

    int target;
    cout<<"Enter the target element: ";
    cin>>target;
    
    while(beg<=end){
        int mid = (beg+end)/2;
        if(arr[mid]==target){
            cout<<"Element found at index: "<<mid<<endl;
            break;
        }
        else if(arr[mid]<target){
            beg = mid+1;
        }
        else{
            end = mid-1;
        }
    }
}
*/




//Bubble Sort

/*
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the "<<n<<" elements: ";

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Original array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    int temp;
    for(int i=0;i<n;i++){            // For no. of passes

        for(int j=0;j<n-1-i;j++)     // For comparision in each pass
        {
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }    
    }

    cout<<"Array after sorting: ";

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
*/


//Sum and differnece

/*
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the "<<n<<" elements: ";

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Original array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    cout<<endl;

    int sum_even = 0;
    int sum_odd = 0;

    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            sum_even +=arr[i];
        }
        else{
            sum_odd+=arr[i];
        }
    }
    cout<<"sum_even is: "<<sum_even<<endl;
    cout<<"sum_odd is: "<<sum_odd<<endl;

    int difference = sum_even-sum_odd;
    cout<<"Difference is: "<<difference;


}
*/

// Sum of two max. elements

/*
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the "<<n<<" elements: ";

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Original array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    int temp;
    for(int i=0;i<n;i++){            // For no. of passes

        for(int j=0;j<n-1-i;j++)     // For comparision in each pass
        {
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }    
    }

    cout<<"Array after sorting: ";

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    int sum = arr[n-1] +  arr[n-2];
    cout<<"Sum: "<<sum;
}
*/


// sum of two max elements and min elements

/*
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the "<<n<<" elements: ";

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Original array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    int temp;
    for(int i=0;i<n;i++){            // For no. of passes

        for(int j=0;j<n-1-i;j++)     // For comparision in each pass
        {
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }    
    }

    cout<<"Array after sorting: ";

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    int max_sum = arr[n-1] +  arr[n-2];
    cout<<"Sum of 2 maximum numbers: "<<max_sum;

    cout<<endl;

    int min_sum = arr[0]+arr[n-5];
    cout<<"Sum of 2 minimum numbers: "<<min_sum;
}
*/


//count of elements

int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the "<<n<<" elements: ";

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Original array is: ";

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    int target1,target2;
    cout<<"Enter the target elements: ";
    cin>>target1>>target2;

    int count1=0;
    int count2=0;

    for(int i=0;i<n;i++){
        if(arr[i]==target1){
            count1+=1;
        }
        else if(arr[i]==target2){
            count2+=1;
        }
    }
    cout<<"Count of "<<target1<<" : "<<count1;
    cout<<endl;
    cout<<"Count of "<<target2<<" : "<<count2;

}