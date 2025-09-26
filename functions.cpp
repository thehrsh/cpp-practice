// pyara sa calculator
#include<iostream>
using namespace std;

int main(){
    int a,b;
    char ch;
    cout<<"enter ur first num :";
    cin>>a;
    cout<<"enter ur second num :";
    cin>>b;
    cout<<"enter ur operator(+ ,- , * ,/ ,% ) :";
    cin>>ch;


    switch(ch){
        case '+': cout<<"ur required sum is "<<a+b<<endl; break;
        case '-': cout<<"ur required difference is "<<a-b<<endl; break;
        case '*': cout<<"ur required multiplication is "<<a*b<<endl; break;
        case '/': cout<<"ur required division is "<<a/b<<endl; break;
        case '%': cout<<"ur required remainder is "<<a%b<<endl; break;
        default : cout<<"plz enter a valid operation";
    }

}



// hw
#include<iostream>
using namespace std;

int main(){
    int rs,rs100,rs50,rs20,rs1;
    cout<<"enter ur amount in rs:";
    cin>>rs;


    switch(1){
        case 1 :{
            rs100=rs/100;
            rs = rs - (rs100*100);
            cout<<"u will require ("<<rs100<<")100rs note"<<endl;
        }
         case 2 :{
            rs50=rs/50;
            rs = rs - (rs50*50);
            cout<<"             & ("<<rs50<<")50rs note"<<endl;
        }
         case 3 :{
            rs20=rs/20;
            rs = rs - (rs20*20);
            cout<<"             & ("<<rs20<<")20rs note"<<endl;
        }
         case 4 :{
            rs1=rs/1;
            rs = rs - (rs1*1);
            cout<<"             & ("<<rs1<<")1rs note"<<endl;
        }
    }
       
}



// // FUNCTIONS !!
#include<iostream>
using namespace std;

int power(int a,int b){

    int ans = 1;

    for(int i=1; i<=b;i++){
       ans = ans * a;
    }
    return ans;
}


int main(){
    int a,b;
    cout<<"enter base :";
    cin>>a;
    cout<<"enter exponent :";
    cin>>b;

    int answer = power(a,b);
    cout<<"so "<< a <<" raised to the power "<< b <<" is "<< answer;

}

// EVEN/ODD
#include<iostream>
using namespace std;

bool iseven(int a){
    if(a&1){
        return 0;
    }
    return 1;
}

int main(){
    int a;
    cout<<"enter num u want to check :";

    cin>>a;
    
    if (iseven(a)){
        cout<<"ur num is even";
    }
    else{
        cout<<" its odd";
    }
}


 // CALCULATING nCr
#include<iostream>
using namespace std;

int factorial(int p){
    int x=1;

    for(int i=1; i<=p;i++){
        x =x*i;
    }
    return x ;
}

int  nCr(int n,int r){
    int a,b,c;
    a =factorial(n);
    b=factorial(r);
    c= factorial (n-r);

    int ans = a/(b*c);
    return ans;
}

int main(){
    int n,r;
    cout<<"enter n :";
    cin>>n;
    cout<<"enter r :";
    cin>>r;
    int ans = nCr(n,r);
    cout<<ans;
}


 // ARITHMATIC PROGRESSION
#include<iostream>
using namespace std;

int AP(int a,int d,int n){
    int term = a+((n-1)*d);
    return term;
}

int main(){
    int a,d,n;
    cout<<"enter first term of ur AP :";
    cin>>a;
    cout<<"enter common diff of ur AP :";
    cin>>d;
    cout<<"enter which term of AP do u want :";
    cin>>n;

    int x = AP(a,d,n);
    cout<<"so the required term of AP is "<<x;


}


//check bits
#include<iostream>
using namespace std;

int check_bits(int a, int b){
    int count =0 ;

    while(a>0 || b>0){
        count += (a&1);
        count += (b&1);
        a>>=1;
        b>>=1;
    }
    return count ;
}

int main(){
    int a,b ;
    cin>>a>>b;

    int ans= check_bits(a,b);
    cout<<"the total number of set bits in a &b is :"<<ans;
}
                                                                              


