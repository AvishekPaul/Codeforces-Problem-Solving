#include<iostream>
#include<cmath>
using namespace std;

int main(){
    long long n,k,x,y;
    cin>>n>>k;
    
    if(n%2==0){
        if(k<=n/2){
            
            x=k*2-1;
            cout<<x;
        }
        else{
            y=k-(n/2);
            x=y*2;
            cout<<x;
        }
    }
    else{
        if(k<=n/2+1){
            x=k*2-1;
            cout<<x;
        }
        else{
            y=k-(n/2+1);
            x=y*2;
            cout<<x;
        }
    }

    
}
