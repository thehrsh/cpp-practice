// special pattern /cw
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter a num :";
    cin>>n;

    int i =1;
    // first triangle
    while(i<=n){
        int space=n-i;
        while(space){
            cout<<" ";
            space--;
        }

    //second triangle 
        int j=1;
        while(j<=i){
            cout<<j;
            j++;
        }

    //third triangle
    int start=i-1;
    while(start){
        cout<<start;
        start--;
    }

    
    i = i+1 ;
    cout<<"\n";
    }

}
    
    
    
//dabang pattern/hw
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter a num :";
    cin>>n;

    int i =1;
    // first triangle
    while(i<=n){
        int j=1;
        while(j<=n-i+1){
            cout<<j<<" ";
            j++;
        }

    //second triangle 
    int star = 2*(i-1);
    while(star){
        cout<<"*"<<" ";
        star --;
    }
        
    //third triangle
    int start = n-i+1;
    while(start){
        cout<<start<<" ";
        start--;
    }
    i = i+1 ;
    cout<<"\n";
    }
}


//BITWISE OPERATOR
#include<iostream>
using namespace std;

int main(){
    int a = 4 ;
    int b = 6 ;

    cout <<"AND :"<<(a&b)<<endl; //4
    cout <<"OR :"<<(a|b)<<endl;  //6
    cout <<"NOT :"<<(~a)<<endl;  //-5
    cout <<"XOR :"<<(a^b)<<endl;  //2
}


//left shift /right shift : 

//5 mcqs on pre&post increment/decrement


//"for" loop 


// PRINT NUMBERS
#include <iostream>
using namespace std;

int main (){
    int n;
    cout<<"enter num: ";
    cin>>n;
    cout<<"printing numbers 1 to "<<n<<endl;

        for (int i=1;i<=n;i++){
            cout<<i<<endl;
        }


}


//  PRINT SUM 
#include <iostream>
using namespace std;

int main (){
    int n;
    cout<<"enter num: ";
    cin>>n;
    cout<<"printing sum of numbers 1 to "<<n<<endl;
    int sum=0;

        for (int i=1;i<=n;i++){
            sum = sum+i;
    }
        cout<<sum;


}


// FIBONACCI SERIES
#include <iostream>
using namespace std;

int main (){
    int n;
    cout<<"enter num: ";
    cin>>n;
    // cout<<"printing sum of numbers 1 to "<<n<<endl;
    int a=0;
    int b=1;
    // int c;

    for (int i=1 ;i<=n;i++){
        int c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
        
        
}



//PRIME NUMBERS

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter num u want to check :";
    cin>>n;
    bool isprime;

    for(int i =3;i<n;i++){
        if(n==2){
            isprime=true;

        }
        else if(n%i!=0){
            isprime=true;

        }
        else{
            isprime=false;

        }
    }
    if(isprime){
        cout<<"PRIME";
    }
    else{
        cout<<"NOT PRIME";
    }

}   

//BREAK,CONTINUE

//5 hw mcqs

//variable scopping

//operator precedence
