#include <bits/stdc++.h> 
#include<iostream>
#include<math.h>
using namespace std;

bool isPrime(long long n) 
{ 
     
    if (n <= 1) 
        return false; 
  
    
    for (int i = 2; i<=sqrt(n); i++) {
        if (n % i == 0) 
            return false; 
    }
    return true; 
} 
 int main(){
     long long n,p,q,i,j,count=0,a;
     int flag=1;
     cin>>n;
     a=n;
     for(i=1;i<=100;){
     if(isPrime(n)){
         count++;
         n=a-n;
         a=n;
     }

     else{
         n=n-i;
         
     }

     if(n==1){
         count++;
         break;
     }

     if(n==0){
         break;
     }
     }

     cout<<count;

 }