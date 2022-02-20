#include <bits/stdc++.h> 
#include<iostream>
using namespace std;
int main(){
    int n;
    int x1=0,x2=0,x3=0,x4=0;
    int sum,a=0,b,c,j,k;
    int count;
    int y,z;
    cin>>n;
    int s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    sort(s, s+n, greater<int>());
    for(int i=0;i<n;i++){
        if(s[i]==4){
            x4++;
        }
        else if(s[i]==3){
            x3++;
        }
        else if(s[i]==2){
            x2++;
        }
        else if(s[i]==1){
            x1++;
        }

    }
    for(j=0;j<x2;j=j+2){
        a++;
    }
    sum=2*x2;
    b=x3*4-x3*3;
    if(a>0){
    if((sum/a)<4){
        c=2;
    }
    else{
        c=0;
    }
    }
    else{
        c=0;
    }
    if(b+c<x1){
        y=x1-(b+c);
        if(y%4==0){
            z=y/4;
        }
        else{
            z=y/4+1;
        }
        count=x4+x3+a+z;
    }
    else{
        count=x4+x3+a;
    }

cout<<count;

}