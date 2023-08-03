#include<iostream>
using namespace std;

/*
//1st

int main(){
    int n;
    cin>>n;

    int i = 1;

    while(i<=n){
        int j = 1;
        while(j<=n){
            cout<<j<<" ";
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
}
*/


/*
//2nd

int main(){
    int n;
    cin>>n;

    int i = 1;

    while(i<=n){
        int j = 1;
        while(j<=n){
            cout<<n-j+1<<" ";
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
}
*/

/*
//3rd

int main(){
    int n;
    cin>>n;

    int i=1;
    int count=1;
     while(i<=n){
        int j = 1;
        while(j<=n){
            cout<<count<<" ";
            count+=1;
            j+=1;
        }
        cout<<endl;
        i+=1;
     }
}
*/


/*
//4th

int main(){
    int n;
    cin>>n;

    int row=1;

    while(row<=n){
        int col=1;
        while(col<=row){
            cout<<"*";
            col+=1;
        }
        cout<<endl;
        row+=1;
    }
}
*/


/*
//5th

int main(){
    int n;
    cin>>n;

    int row=1;
    while(row<=n){
        int col=1;
        while(col<=row){
            cout<<row<<" ";
            col+=1;
        }
        cout<<endl;
        row+=1;
    }
}
*/


/*
//6th
int main(){
    int n;
    cin>>n;

    int row =1;
    int count =1;

    while(row<=n){
        int col =1;
        while(col<=row){
            cout<<count<<" ";
            count+=1;
            col+=1;
        }
        cout<<endl;
        row+=1;
    }
}
*/


/*
//7th

int main(){
    int n;
    cin>>n;

    int row=1;

    while(row<=n){
        int col=1,value=row;
        while(col<=row){
            cout<<value<<" ";
            value+=1;
            col+=1;
        }
        cout<<endl;
        row+=1;
    }
}
*/


/*
//8th

int main(){
    int n;
    cin>>n;

    int row=1;
    while(row<=n){
        int col=1,value=row;
        while(col<=row){
            cout<<value<<" ";
            value-=1;
            col+=1;
        }
        cout<<endl;
        row+=1;
    }
}
*/



/*
//9th

int main(){
    int n;
    cin>>n;

    int row=1;

    while(row<=n){
        int col=1;
        while(col<=n){
            char ch = 'A'+row-1;
            cout<<ch<<" ";
            col+=1;
        }
        cout<<endl;
        row+=1;
    }
}
*/



/*
//10th

int main(){
    int n;
    cin>>n;

    int row=1;

    while(row<=n){
        int col=1;
        while(col<=n){
            char ch='A'+col-1;
            cout<<ch<<" ";
            col+=1;
        }
        cout<<endl;
        row+=1;
    }
}
*/



/*
//11th

int main(){
    int n;
    cin>>n;

    int row=1;
    char count='A';

    while(row<=n){
        int col=1;
        while(col<=n){
            cout<<count<<" ";
            count+=1;
            col+=1;
        }
        cout<<endl;
        row+=1;
    }
}
*/


/*
//12th

int main(){
    int n;
    cin>>n;

    int row=1;

    while(row<=n){
        int col=1;
        while(col<=n){
            char ch='A'+row+col-2;
            cout<<ch<<" ";
            col+=1;
        }
        cout<<endl;
        row+=1;
    }
}
*/



/*
//13th

int main(){
    int n;
    cin>>n;

    int row=1;

    while(row<=n){
        int col=1;
        while(col<=row){
            char ch = 'A'+row-1;
            cout<<ch<<" ";
            col+=1;
        }
        cout<<endl;
        row+=1;
    }
}
*/



/*
//14th

int main(){
    int n;
    cin>>n;

    int row=1;
    char ch='A';

    while(row<=n){
        int col=1;
        while(col<=row){
            cout<<ch<<" ";
            ch+=1;
            col+=1;
        }
        cout<<endl;
        row+=1;
    }
}
*/



/*
//15th

int main(){
    int n;
    cin>>n;

    int row=1;

    while(row<=n){
        int col=1;
        while(col<=row){
            char ch='A'+row+col-2;
            cout<<ch<<" ";
            col+=1;
        }
        cout<<endl;
        row+=1;
    }
}
*/



/*
//16th

int main(){
    int n;
    cin>>n;

    int row=1;

    while(row<=n){
        int col=1;
        char ch='A'+n-row;
        while(col<=row){
            cout<<ch<<" ";
            ch+=1;
            col+=1;
        }
        cout<<endl;
        row+=1;
    }
}
*/



/*
//17th

int main(){
    int n;
    cin>>n;

    int row=1;

    while(row<=n){

        //printing space
        int space=n-row;
        while(space){
            cout<<" ";
            space-=1;
        }

        //printing star
        int col=1;
        while(col<=row){
            cout<<"*";
            col+=1;
        }
        cout<<endl;
        row+=1;
    }
    
}
*/




/*
//18th

int main(){
    int n;
    cin>>n;

    int row=1;

    while(row<=n){
        int col=1;
        int star= n-row+1;
        while(star){
            cout<<"*";
            star-=1;
            col+=1;
        }
        cout<<endl;
        row+=1;
    }
}
*/



/*
//19th

int main(){
    int n;
    cin>>n;

    int row=1;

    while(row<=n){
        int space = row-1;
        while(space){
            cout<<" ";
            space=space-1;
            
        }

        int col=1;
        while(col<=n-row+1){
            cout<<"*";
            col+=1;
        }
        cout<<endl;
        row+=1;
    }
}
*/



/*
//20th

int main(){
    int n;
    cin>>n;

    int row=1;

    while(row<=n){

        //Print space

        int space = n-row;
        while(space){
            cout<<" ";
            space-=1;
        }

        //print 1st triange

        int col=1;
        while(col<=row){
            cout<<col;
            col+=1;
        }

        //print second triangle

        int start = row-1;
        while(start){
            cout<<start;
            start-=1;
        }
        cout<<endl;
        row+=1;
    }

}
*/


/* Using for loop*/

/*
//Rectangle

int main(){
    int row,col;
    cout<<"Enter the no. of rows: ";
    cin>>row;
    cout<<"Enter the no. of columns: ";
    cin>>col;

    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
*/


/*
//Hollow Rectangle

int main(){
    int row,col;
    cin>>row>>col;

    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            if(i==1 || i==row || j==1 || j==col){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
*/


/*
//Inverted half pyramid

int main(){
    int n;
    cin>>n;

    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }cout<<endl;
    }
}
*/


/*
//Inverted half pyramid after 180deg rotation

int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<=n-i){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
}
*/


/**/
//Half pyramid using numbers

int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
}


