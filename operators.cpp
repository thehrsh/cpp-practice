// FINDING THE GREATER NUMBER
#include<iostream>
using namespace std;

int main(){
    int a;
    int b;
    cout<<"enter ur first num:";
    cin>>a;
    cout<<"enter ur second num:";
    cin>>b;

    if (a>b){
       cout<<"first one is bigger" <<"\n";
    }
    else if(a<b){
        cout<<"second one is bigger"<<"\n";
    }
    else{
        cout<<"both are equal !!"<<"\n";
    }
    
}


// WHICH CHARACTER U JUST ENTERED 
#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"enter ur character:"<<"\n";
    cin>>ch;

    if(ch>='A'&& ch<='Z'){
        cout<<"this is uppercase character"<<"\n";
    }
    else if(ch>='a'&& ch<='z'){
        cout<<"this is lowercase character"<<"\n";
    }
    else if(ch>='0'&& ch<='9'){
        cout<<"this is numeric character"<<"\n";
    }
    else{
        cout<<"this is a special character"<<"\n";
    }
}


// PRINTING NUMS FROM 1 TO N
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter ur num:";
    cin>>n;

    int i=0;
    while(i<=n){
        cout<<i<< " ";
        i +=1;

    }

}


//PRINTING SUM OF NUMS 1 TO N
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter ur num:";
    cin>>n;

    int i=0,sum=0;

    while(i<=n){
        
        sum +=i;
        i +=1;

    }
    cout<<"ur req sum is :"<<sum<<endl;
}


//PRINT SUM OF EVEN NUMS FROM 1 TO N
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter ur num:";
    cin>>n;

    int i=0,sum=0;

    while(i<=n){
        
        sum +=i;
        i +=2;

    }
    cout<<"the sum of even nums is :"<<sum<<endl;
}



// CHECKING PRIME NUMBER 
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter num u want to check:";
    cin>>n;

    int i=2;
        if(n==0){
            cout<<"NEITHER PRIME NOR COMPOSITE";
        }
        else if(n==1){
            cout<<"NOT PRIME";
        }
        else if(n==2){
            cout<<"PRIME";
        }

    while(i<n){
        
        if(n%i==0){
            cout<<"NOT PRIME for "<<i<<endl;
        }
        else if(n%i!=0){
            cout<<"PRIME for "<<i<<endl;
        }
        
        else{
            cout<<"TRY AGAIN";
        }
        i +=1;
    }
}


// CALCULATING THE FACTORIAL OF NUMBER N
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter ur num:";
    cin>>n;

    int i=1,fac=1;

    while(i<=n){
        
        fac *=i;
        i +=1;

    }
    cout<<"ur req factorial is :"<<fac<<endl;
}

  