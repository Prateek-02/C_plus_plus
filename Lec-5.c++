#include<iostream>
using namespace std;


/*Bitwise operators*/

/*
int main(){

    int a=4;
    int b=6;

    cout<<"a&b="<<(a&b)<<endl;
    cout<<"a|b="<<(a|b)<<endl;
    cout<<"~a="<<~a<<endl;
    cout<<"a^b="<<(a^b)<<endl;

    cout<<(17>>1)<<endl;
    cout<<(17>>2)<<endl;
    cout<<(19<<1)<<endl;
    cout<<(19<<2)<<endl;  
}
*/



/*
int main(){
    int i=7;

    cout<<(++i)<<endl;       //i=8
    cout<<(i++)<<endl;       //i=8
    cout<<(i--)<<endl;       //i=9
    cout<<(--i)<<endl;       //i=7
}
*/




/*For-Loop*/

/*
int main(){

    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;

    cout<<"Printing count from 1 to n: "<<endl;

    int i;
    for(i=1;i<=n;i++){
        cout<<i<<endl;
    }


}
*/



/*
//Sum of n numbers

int main(){
    int n;
    cin>>n;

    int sum=0;

    int i;
    for(i=1;i<=n;i++){
        sum+=i;
    }
    cout<<sum<<endl;
}
*/



/*
//Fibonacci

int main(){

    int n =10;

    int a=0;
    int b=1;

    cout<<a<<" "<<b<<" ";
    for(int i=1;i<=n;i++){
        int next = a+b;
        cout<<next<<" ";

        a=b;
        b=next;
    }
}
*/



/*
//Prime numbers

int main(){
    
    int n;
    cin>>n;

    bool isprime=1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            // cout<<"Not Prime"<<endl;
            isprime=0;
            break;
        }
    }
    if(isprime==0){
        cout<<"Not Prime"<<endl;
    }
    else{
        cout<<"Prime"<<endl;
    }
}
*/



/*
//Continue statement

int main(){

    for(int i=0;i<5;i++){
        cout<<"HI"<<endl;
        cout<<"Hey"<<endl;
        continue;

        cout<<"Reply to karde"<<endl;
    }
}
*/




/*Scope*/

/*
int main(){
    
    int a=3;
    cout<<a<<endl;

    if(true){
        // cout<<a<<endl;
        int a=5;
        cout<<a<<endl;
    }

    cout<<a<<endl;

    for(int i=0;i<8;i++){
        cout<<"HI"<<endl;
    }
}
*/


/*Questions*/


/*
//Find product and sum of the given number and subtract

int main(){
    int n;
    cin>>n;
    
    int prod=1;
    int sum=0;

    while(n!=0){
        int digit = n%10;
        prod = prod*digit;
        sum  = sum+digit;

        n = n/10;
    }

    int answer = prod-sum;
    cout<<answer<<endl;
}
*/


//Question 2

/*
int main(){
    int n;
    cin>>n;

    int temp = n;
    int rev=0;

    while(n!=0){
        int d = n%10;
        rev = rev*10+d;
        n = n/10;
    }
    cout<<rev<<endl;

}
*/
