#include<iostream>
#include<math.h>
using namespace std;

/*Reverse*/

/*
int main(){
    int n;
    cin>>n;

    int rev=0;
    while(n!=0){
        int d = n%10;
        if((rev>INT32_MAX/10) || (rev<INT32_MIN/10)){
            return 0;
        }
        rev = rev*10+d;
        n=n/10;
    }
    cout<<"Reverse is: "<<rev<<endl;
}
*/



/*Compliment of base 10*/

int main(){
    int n;
    cin>>n;
    int m = n;
    int mask=0;

    if(n==0){
        return 1;
    }

    while(m!=0){
        mask = (mask<<1)|1;
        m = m>>1;
    }
    int ans = (~n) & mask;
    cout<<ans<<endl;

}