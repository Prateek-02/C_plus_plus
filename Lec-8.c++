#include<iostream>
using namespace std;

/*
int main(){

    int num = 1;
    char ch = '1';

    switch(ch){
        case 1: cout<<"First"<<endl;
                break;
        
        case '1': switch(num){
            case 1:cout<<"Value of num is: "<<num<<endl;
            break;
        }
            break;

        default: cout<<"It is default case"<<endl;
    }
}
*/


/*Mini calculator*/

/*
int main(){

    int a,b;
    cout<<"Enter the value of a: ";
    cin>>a;

    cout<<"Enter the value of b: ";
    cin>>b;

    char op;
    cout<<"Enter the operator: ";
    cin>>op;

    switch(op){
        case '+': cout<<"a+b:"<<(a+b)<<endl;
        break;

        case '-': cout<<"a-b:"<<(a-b)<<endl;
        break;

        case '*': cout<<"a*b:"<<(a*b)<<endl;
        break;

        case '/': cout<<"a/b:"<<(a/b)<<endl;
        break;

        case '%': cout<<"a%b:"<<(a%b)<<endl;
        break;

        default: cout<<"Not valid operator"<<endl;
        break;
    }
}
*/

/*Hw question*/

/*
int main(){
    int amount = 1375;
    int n100,n50,n20,n1;

    switch(amount>=100){
        case 1:
            n100=amount/100;
            amount -= n100*100;
            break;
    }

    switch(amount>=50){
        case 1:
            n50 = amount/50;
            amount-=n50*50;
            break;
    }

    switch(amount>=20){
        case 1:
            n20 = amount/20;
            amount-=n20*20;
            break;
    }

    switch(amount>=1){
        case 1:
            n1 = amount/1;
            amount-=n1*1;
            break;
    }

    cout<<"100: "<<n100<<endl;
    cout<<"50: "<<n50<<endl;
    cout<<"20: "<<n20<<endl;
    cout<<"1: "<<n1<<endl;
}
*/

/*Functions*/


/*Power*/
/*
int power(int a,int b){

    int ans=1;

    for(int i=1;i<=b;i++){
        ans=ans*a;
    }

    return ans;
}
int main(){

    int a,b;

    cin>>a>>b;

    int ans = power(a,b);

    cout<<"Answer is: "<<ans<<endl;
    return 0;
}
*/


/*Even odd*/
/*
bool isEven(int a){
    if(a%2==0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){

    int num;
    cin>>num;

    if (isEven(num)){
        cout<<"Number is even"<<endl;
    }

    else{
        cout<<"Number is odd"<<endl;
    }
}
*/


/*Factorial*/

/*
int fact(int n){

    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}


int nCr(int n,int r){

    int num = fact(n);

    int deno = fact(r) * fact(n-r);

    int ans = num/deno;

    return ans;
}

int main(){

    int n,r;
    cin>>n>>r;

    cout<<"Answer is:"<<nCr(n,r)<<endl;

}
*/

/*Counting*/

/*
void printcounting(int n){       //void does not return anything
    //Function body
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main(){

    int n;
    cin>>n;
    //Function call
    printcounting(n);
}
*/

/*Prime or not*/

/*
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
        cout<<"Is a Prime no."<<endl;
    }

    else{
        cout<<"Is not a Prime no."<<endl;
    }
}
*/


/*Ap*/

int main(){
    int n;
    cout<<"Enter the value n: ";
    cin>>n;

    int ap = 3*n+7;

    cout<<"Nth term is: "<<ap;
}

