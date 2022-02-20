#include<bits/stdc++.h>
#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int k, r;
    cin>>k>>r;
    int i,j,a,b,c;

    for(i=1;i<=9;i++){
        a=k*i;
        b=a%10;
        if(b==r || b==0){
            cout<<i;
            break;
        }
    }
}
