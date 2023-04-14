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



