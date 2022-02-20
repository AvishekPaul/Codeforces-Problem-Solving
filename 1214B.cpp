#include <bits/stdc++.h> 
#include<iostream>
#include<math.h>
using namespace std;
 int main(){
     int b,g,n,i,j,count=0;
     cin>>b;
     cin>>g;
     cin>>n;

     for(i=0,j=n;i<=n;i++,j--){
         if(i>b || j>g){
             continue;
         }
         if(i+j==n){
             count++;
         }
     }

     cout<<count;
 }