#include <bits/stdc++.h> 
#include<iostream>
#include<math.h>
using namespace std;

long long gcd(long long a, long long b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 

long long fgcd(long long arr[], long long n){
    long long result=arr[0];
    long long i;

    for(i=1;i<n;i++){
        result=gcd(arr[i],result);
    }
    return result;
}

int main(){
    long long n,d,count=0;
    cin>>n;
    long long arr[n];
    long long i,j;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    d=fgcd(arr,n);
    

    for(i=1;i<=sqrt(d);i++){
       
        if(d%i==0){
            if(d/i==i){
                count++;
            }
            else{
            count=count+2;
            }
        }
    }
    cout<<count;
}