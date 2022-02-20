#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int t,n,k,count=0;
    string s,p;
    
    cin>>t;
    while(t--){
        cin>>n>>k;
        cin>>s;
        p=s;
        reverse(p.begin(),p.end());
        if(k==0){
            cout<<"1"<<endl;
            continue;
        }
        else{
      
            if(s==p){
                cout<<"1"<<endl;
            }
            else{
                cout<<"2"<<endl;
            }
        }
    }

}