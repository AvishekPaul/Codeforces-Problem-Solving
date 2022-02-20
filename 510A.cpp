#include <bits/stdc++.h> 
#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int i,j,k=0,l=0;

    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            if(i%2!=0){
                cout<<"#";
            }
            else{
                if(i==2 || i==2+k){
                    if(j==m){
                        cout<<"#";
                    }
                    else{
                        cout<<".";
                    }
                    
                }
                else if(i==4 || i==4+l){
                    if(j==1){
                        cout<<"#";
                    }
                    else{
                        cout<<".";
                    }
                   
                }
            }
        }
        cout<<endl;
        if(i==2 || i==2+k){
            k=k+4;
        }
        else if(i==4 || i==4+l){
        l=l+4;
        }
    }
}