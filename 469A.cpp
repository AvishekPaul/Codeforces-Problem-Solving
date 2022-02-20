#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

bool areEqual(int c[], int merged[], int n, int x) 
{ 
    
    if (n != x) 
        return false; 
  
     
    for (int i = 0; i < n; i++) 
        if (c[i] != merged[i]) 
            return false; 
  
    
    return true; 
} 

int main(){
    int n,i,j,flag,k;
    cin>>n;
    int c[n];
    for(i=1;i<=n;i++){
        c[i-1]=i;
    }
    int p;
    cin>>p;
    int a[p];
    for(i=0;i<p;i++){
        cin>>a[i];
    }
    int q;
    cin>>q;
    int b[q];
    for(i=0;i<q;i++){
        cin>>b[i];
    }
    int x=p+q;
    int merged[x];
   

    for(i=0;i<p;i++){
        merged[i]=a[i];
    }
    for(i=0,j=p;i<q && j<x;i++,j++){
        merged[j]=b[i];
    }
    for(i=0;i<x;i++){
        for(j=i+1;j<x;j++){
            if(merged[j]<=merged[i]){
                int y=merged[j];
                merged[j]=merged[i];
                merged[i]=y;
            }
        }
    }

    

    j=0;
    int temp[x];
  
    for (int i=0; i < x-1; i++) {
        if (merged[i] != merged[i+1]) 
            temp[j++] = merged[i]; 
    }
  
    temp[j++] = merged[x-1];
    for (int i=0; i<j; i++) 
        merged[i] = temp[i];
    
    
    x=j;

    
   if (areEqual(c, merged, n, x)){
        cout<<"I become the guy.";
    }
    else{
        cout<<"Oh, my keyboard!";
    
    }


}