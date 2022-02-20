#include <bits/stdc++.h> 
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
 int main(){
     int n,t,i,j;
     cin>>n>>t;
     string s;
     cin>>s;
     char temp;

     for(j=1;j<=t;j++){
         for(i=0;i<n-1;i++){
             if(s[i]=='B' && s[i+1]=='G'){
                 temp=s[i];
                 s[i]=s[i+1];
                 s[i+1]=temp;
                 i++;
                 
             }
         }

         
     }

     cout<<s;

 }