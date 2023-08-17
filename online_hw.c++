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
*/

//Insertion sort

/*
int main(){
    int n;
    cout<<"Enter the size of array: ";
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
    
    int temp,ptr;
    for(int i=1;i<n;i++){
        temp = arr[i];
        ptr = i-1;
        while(temp<arr[ptr] && ptr!=-1){
            arr[ptr+1]=arr[ptr];
            ptr-=1;
        }
        arr[ptr+1] = temp;
    }

    cout<<"Sorted array is: ";

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
*/

/*
int sum(int a,double b){
    return(a+b);
}

int sum(double c,int d){
    return(c+d);
}

int sum(int e,int f){
    return(e+f);
}

int sum(double g,double h){
    return(g+h);
}

int main(){
    cout<<"Sum of a+b: "<<sum(3,4.5)<<endl;
    cout<<"Sum of c+d: "<<sum(9.5,6)<<endl;
    cout<<"Sum of e+f: "<<sum(3,6)<<endl;
    cout<<"Sum of g+h: "<<sum(9.5,9.7)<<endl;
}
*/

//Class

// find perimeter and longest side of triangle using friend class
/*
class Triangle{
    int a,b,c;

    friend float perimeter(Triangle t);
    friend float longest(Triangle t);

    public:
    void setSides(int n1,int n2,int n3){
        a = n1;
        b = n2;
        c = n3;
    }
};

float perimeter(Triangle t){
        return t.a+t.b+t.c;
}
float longest(Triangle t){
    if((t.a>t.b) && (t.a>t.c)){
        return t.a;
    } 
    else if(t.b>t.a && t.b>t.c){
        return t.b;
    }
    else{
        return t.c;
    }
}
int main(){
    Triangle t1;
    t1.setSides(4,5,6);

    float p = perimeter(t1);

    cout<<"Perimeter of the triangle is: "<<p<<endl;

    float l = longest(t1);

    cout<<"Longest side is: "<<l<<endl;
    return 0;
}
*/


// find area and perimeter of circle using friend class
/*
class Circle{
    float radius;
    float pi;
    friend float perimeter(Circle c);
    friend float area(Circle c);

    public:
    void setnumbers(float r,float p){
        radius = r;
        pi = p;
    }
};

float perimeter(Circle c){
    return 2*(c.pi*c.radius);
}
float area(Circle c){
    return (c.pi)*(c.radius*c.radius);
}

int main(){
    Circle c1;
    c1.setnumbers(10,3.14);

    float p = perimeter(c1);

    cout<<"Perimeter of circle is: "<<p<<endl;

    float a = area(c1);

    cout<<"Area of circle is: "<<a<<endl;
}
*/

// Find perimeter,longest and smallest side of triangle using friend class
/*
class Triangle{
    int a,b,c;

    friend float perimeter(Triangle t);
    friend float longest(Triangle t);
    friend float smallest(Triangle t);

    public:
    void setsides(int n1,int n2,int n3){
        a = n1;
        b = n2;
        c = n3;
    }
};


float perimeter(Triangle t){
    return t.a+t.b+t.c;
}

float longest(Triangle t){
    if((t.a>t.b) && (t.a>t.c)){
        return t.a;
    } 
    else if(t.b>t.a && t.b>t.c){
        return t.b;
    }
    else{
        return t.c;
    }
}

float smallest(Triangle t){
    if(t.a<t.b && t.a<t.c){
        return t.a;
    }
    else if(t.b<t.a && t.b<t.c){
        return t.b;
    }
    else{
        return t.c;
    }
}

int main(){
    Triangle t1;
    t1.setsides(4,5,6);

    float p = perimeter(t1);

    cout<<"Perimeter of the triangle is: "<<p<<endl;

    float l = longest(t1);

    cout<<"Longest side is: "<<l<<endl;

    float s = smallest(t1);

    cout<<"Smallest side is: "<<s<<endl;

    return 0;

}
*/

// Enter a number and store each digit in a array and find the sum of digits

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int arr[50];
    int numdigit = 0;

    while(n!=0){
        int digit = n%10;
        arr[numdigit] = digit;
        numdigit++;
        n = n/10;
    }

    cout<<"array: ";

    int sum=0;

    for(int i =numdigit-1;i>=0;i--){
        cout<<arr[i]<<" "<<endl;;
        sum += arr[i];
    }
    cout<<"Sum: "<<sum;
    cout<<endl;
}

