#include <bits/stdc++.h> 
#include<iostream>
#include<string.h>
using namespace std;

int gcd(int a, int b) 
{ 
    if (a == 0) 
       return b; 
    if (b == 0) 
       return a; 
   
    if (a == b) 
        return a; 
   
    if (a > b) 
        return gcd(a-b, b); 
    return gcd(a, b-a); 
} 

int main(){
    int a,b,n;
    cin>>a>>b>>n;
    int i=n;
    if(a==1 && b==1 && n%2==0){
        cout<<"1";
        return 0;
    }
    else if(a==1 && b==1 && n%2!=0){
        cout<<"0";
        return 0;
    }
    
        while(i>0){
            int x=gcd(a,i);
            
            
            i=i-x;

            int y=gcd(b,i);
            
            if(i==0){
                cout<<"0";
                break;
            }
            i=i-y;
            if(i==0){
                cout<<"1";
                break;
            }
        }
    

}