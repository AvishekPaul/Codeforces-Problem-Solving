#include <bits/stdc++.h> 
#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cin>>n;
     if(n%2==0){
         count=n-n/2;
     }
     else if(n%3==0){
         count=n-n/3;
     }
     else if(n%4==0){
         count=n-n/4;
     }
     else if(n%5==0){
         count=n-n/5;
     }
     else if(n%6==0){
         count=n-n/6;
     }
     else if(n%7==0){
         count=n-n/7;
     }
     else if(n%8==0){
         count=n-n/8;
     }
     else if(n%9==0){
         count=n-n/9;
     }
     cout<<count;
}