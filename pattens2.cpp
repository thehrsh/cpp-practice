#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter num:";
    cin>>n;

    int i=1;

    while(i<=n){
        int j =1 ;
        
        while(j<=n){
            char ch ='A'+i-1;
            cout<<ch<<" ";
            j +=1;
            
        }
        cout<<"\n";
        i +=1;
    }
}



#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter num:";
    cin>>n;

    int i=1;

    while(i<=n){
        int j =1 ;
        char ch = 65 ;
        while(j<=n){
            cout<<ch<<" ";
            j +=1;
            ch +=1;
        }
        cout<<"\n";
        i +=1;
    }
}



#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter num:";
    cin>>n;

    int i=1,count='A';

    while(i<=n){
        int j =1;
        

        while(j<=i){
            cout<<char(count)<<" ";
            j +=1;
            count +=1;
        }
        cout<<"\n";
        i +=1;
    }
}



#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter num:";
    cin>>n;

    int i=1;
    char ch = 'A';

    while(i<=n){
        int j=1;
        

        while(j<=i){
            cout<<ch;
            
            j++;
        }
        ch++;
        cout<<"\n";
        i++;
    }

}




#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter num:";
    cin>>n;

    int i=1;
    

    while(i<=n){
        int j=1;
        

        while(j<=i){
            cout<<char('A'+i+j-2)<<"  ";
            
            j++;
        }
       
        cout<<"\n";
        i++;
    }

}




#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter num:";
    cin>>n;
    
    int i=1;
    while(i<=n){
        int space=n-i;
        while(space){
            cout<<" ";
            space--;
        }
        int j=1;
        
        while(j<=i){
            cout<<"*";
            j++;
        }
        cout<<"\n";
        i++;
    }
    
}



#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter num:";
    cin>>n;
    
    int i=1;

    while(i<=n){
        int space=n-i;
        while(space){
            cout<<" ";
            space--;
        }
        int j=4 ;
        
        while(j<=(2*n-1)){
            cout<<"* ";
            j++;
        }
        cout<<"\n";
        i++;
    }
    
}