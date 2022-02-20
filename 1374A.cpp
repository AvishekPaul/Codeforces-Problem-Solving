#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int t,n,x,y,count,divi;
    cin>>t;
    while(t--){
    cin>>x>>y>>n;
    if(y==0&&n<x){
        cout<<"0"<<endl;
    }
    else{
        count=n%x;
        divi=n/x;
    while(1){
        
        if(count==y){
            cout<<n<<endl;
            break;
        }
        else{
            if(count<y){
                divi--;
                n=divi*x+y;
                count=n%x;
                
            }
            else{
            n=divi*x+y;
            count=n%x;
            divi--;
            }
        }
    }
    }

    }
}