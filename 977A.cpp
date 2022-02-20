#include <bits/stdc++.h> 
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
int main(){
    long long n,k;
    cin>>n>>k;
    for(int i=1;i<=k;i++){
        if(n%10==0){
            n/=10;
        }
        else{
            n--;
        }
    }

    cout<<n;

}