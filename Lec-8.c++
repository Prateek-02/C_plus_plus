#include<iostream>
using namespace std;

/*
int main(){

    int ch='1';

    cout<<endl;
    switch(ch){

        case 1: cout<<"First"<<endl;
                break;
        case '1': cout<<"Character one"<<endl;
                break;

        default: cout<<"It is default case"<<endl;        
    }
}
*/



/* Mini Calculator*/

/*
int main(){
    int a,b;
    cout<<"Enter the value of a: ";
    cin>>a;

    cout<<"Enter the value of b: ";
    cin>>b;

    char op;
    cout<<"Enter the operation: ";
    cin>>op;

    switch(op){
        case '+': cout<<"a+b: "<<(a+b)<<endl;
                    break;

        case '-': cout<<"a-b: "<<(a-b)<<endl;
                    break;

        case '*': cout<<"a*b: "<<(a*b)<<endl;
                    break;

        case '/': cout<<"a/b: "<<(a/b)<<endl;
                    break;

        case '%': cout<<"a%b: "<<(a%b)<<endl;
                    break;

        default:
        cout<<"Enter a valid operation"<<endl;
    }
}
*/



/*HW ques*/

/*
int main(){
    int amount = 1330;
    int n100, n50, n20, n1=0;

    switch(amount>=100){
        case 1:
            n100=amount/100;
            amount -= n100*100;
            break;
    }
    switch(amount>=50){
        case 1:
            n50=amount/50;
            amount -= n50*50;
            break;
    }
    switch(amount>=20){
        case 1:
            n20 = amount/20;
            amount -= n20*20;
            break;
    }
    switch(amount>=1){
        case 1:
            n1 = amount/1;
            amount -= n1*1;
            break;
    }

    cout<<"100: "<<n100<<endl;
    cout<<"50: "<<n50<<endl;
    cout<<"20: "<<n20<<endl;
    cout<<"1: "<<n1<<endl;

}
*/



/*FUNCTIONS*/

/*
int power(){
    int a, b;
    cin>> a >> b;

    int ans=1;
    for(int i=1;i<=b;i++){
        ans=ans*a;
    }
    return ans;
}

int main(){
    // int a,b;
    // cin>> a>> b;

    // int answer = power(a,b);
    // cout<<"Answer is: "<<answer<<endl;

    // return 0;
    
   int ans = power();
   cout<<"Answer is: "<< ans <<endl;
}
*/



/*
bool isEven(int a){
    if(a&1){ //Odd
        return 0;
    }
    else{ //Even
        return 1;
    }
}


int main(){
    int num;
    cin>>num;

    if(isEven(num)){
        cout<<"Number is Even"<<endl;
    }
    else{
        cout<<"Number is Odd"<<endl;
    }
}
*/



/*
int factorial(int n){
    int fact = 1;

    for(int i=1;i<=n;i++){
        fact =fact*i;
    }
    return fact;

}

int nCr(int n,int r){

    int num = factorial(n);

    int deno = factorial(r)*factorial(n-r);

    int ans = num/deno;

    return ans;
}

int main(){
    int n,r;
    cin>> n >> r;

    cout<<"Answer is: "<<nCr(n,r)<<endl;

}
*/


/*
void printcount(int num){
    for(int i=1;i<=num;i++){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;

    printcount(n);

}
*/



/*

// 1-> Prime no.
// 0 -> Not a Prime no.

bool isPrime(int n){

    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
return 1;
}

int main(){
    int n;
    cin>>n;

    if(isPrime(n)){
        cout<<"Is a prime number"<<endl;
    }
    else{
        cout<<"Not a Prime number"<<endl;
    }
}
*/



/*Fibbonacci*/
/*
int fibo(int n){
    int a=0,b=1,i;
    
    cout<<a<<" "<<b<<" ";
    for(i=1;i<n;i++){
        int next = a+b;
        cout<<next<<" ";
        a=b;
        b=next;
    }
}

int main(){
    int n;
    cin>>n;
    fibo(n);
}
*/


/*Pass by value*/


void dummy(int n){
    n++;
    cout<<"n is: "<<n<<endl;
}

int main(){
    int n;
    cin>>n;


    dummy(n);

    cout<<"Number n is: "<<n<<endl;
}









