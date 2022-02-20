#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main(){
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int asum=0,bsum=0;
    int i,j;

    for(i=1;i<=m;i++){
        asum+=a;
    }
 int x=n*a;
 if(x<=b){
     cout<<x;
     return 0;
 }
    
    
    if(asum<=b){
        cout<<x;
        return 0;
    }
    
    else{
        for(i=n;i>0;){
             bsum+=b;
             i-=m;
             if(i<=0){
                 cout<<bsum;
                 return 0;
             }
            if(i<m){
                if(a<=b){
                    bsum=bsum-b+a;
                    i=i-1+m;
                    
                    continue;
                }
                else{
                     bsum+=b;
                     i-=m;
                }
            }
            
            
        }
        cout<<bsum;
        return 0;
    }

}