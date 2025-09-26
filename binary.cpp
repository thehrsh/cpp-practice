
  //decimal to binary
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter ur decimal num :";
    cin>>n;
    int pow =1;
    int x =0;
    int bin;


    while(n>0){
        int rem = n%2;
        bin=(rem*pow)+x ;
        
        pow *=10;
        n /=2;
        x=bin;
    }

    cout<<bin;

}


 //binary to decimal 
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter ur binary :";
    cin>>n;
    int dec=0,x;
    int pow =1;
    

    while(n>0){
        int rem = n%10;
        x= rem*(pow);
        dec = dec + x;

        pow *=2;
        n /=10;
    }
    cout<<dec;

}


   // switch 
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a,b;
    cout<<"enter a :";
    cin>>a;
    cout<<"enter b(b>=a) :";
    cin>>b;
    int n;
    
    for(n=a;a<=n && n<=b;n++){
        
        if(n==1) {
            cout<<"one"<<endl;
    }
        
        else if(n==2) {
            cout<<"two"<<endl;
    }
        else if(n==3) {
            cout<<"three"<<endl;
    }

        else if(n==4) {
            cout<<"four"<<endl;
    }
        else if(n==5) {
            cout<<"five"<<endl;
    }
        else if(n==6) {
            cout<<"six"<<endl;
    }
        else if(n==7) {
            cout<<"seven"<<endl;
    }
        else if(n==8) {
            cout<<"eight"<<endl;
    }
        else if(n==9) {
            cout<<"nine"<<endl;
    }
        while(9<n && n<b){
            if(n%2==0){
                cout<<"even"<<endl;
            }
            else{
                cout<<"odd"<<endl;
            }
             n++;
        }
    }
    return 0;
}


 


#include<iostream>
using namespace std;

int main(){
    int a,b;
     cout<<"enter a :";
     cin>>a;
     cout<<"enter b(b>=a) :";
     cin>>b;
     int n;
    
     for(n=a;a<=n && n<=b;n++){

        if (n >= 1 && n <= 9) {
            switch (n) {
                case 1: cout << "one" << endl;   break;
                case 2: cout << "two" << endl;   break;
                case 3: cout << "three" << endl; break;
                case 4: cout << "four" << endl;  break;
                case 5: cout << "five" << endl;  break;
                case 6: cout << "six" << endl;   break;
                case 7: cout << "seven" << endl; break;
                case 8: cout << "eight" << endl; break;
                case 9: cout << "nine" << endl;  break;
            }
        }
     
       else{
            if(n%2==0){
                cout<<"even"<<endl;
            }
            else{
                cout<<"odd"<<endl;
            } 
        
        }
    }
}