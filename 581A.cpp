#include <bits/stdc++.h> 
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
int main(){
    int a,b,x,y;
    cin>>a>>b;
    
    if(a<=b){
        x=a;
        y=(b-x)/2;
    }
    else{
        x=b;
        y=(a-x)/2;
    }

    cout<<x<<" "<<y;
}