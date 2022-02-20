#include <bits/stdc++.h> 
#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int x=0,y=0,z=0,a,b;
    int w=s.size();
    for(int i=0;i<w;i++){
        if(s[i]=='R'){
            x++;
        }
        else if(s[i]=='L'){
            y++;
        }
        if(s[i]=='R' && s[i+1]=='R' && s[i+2]=='R' && s[i+3]=='R'){
            z++;
        }
    }
    if(y>x){
        cout<<"0";    
    }
    else if(z>0){
        a=x-z*4;
        b=a-y;
        if(b%4==0 && s[x-1]=='R'){
            z=z+b/4;
            cout<<z;      
        }
        else{
            cout<<z;
           
        }
    }
    else if(x>=y){
        a=x-y;
        
        if(a%4==0 && s[w-1]=='R'){
            b=a/4;
            cout<<b;  
        }
        else{
            cout<<"0";
            
        }
    }
}
