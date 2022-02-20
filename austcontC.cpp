#include <bits/stdc++.h> 
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
int main(){
    int n,k,i,j,count=1;
    cin>>n>>k;
    string s;
    cin>>s;

    for(i=1;i<n;i++){
        j=0;
        for(j=0;j<i;j++){
            if(s[i]==s[j]){
                break;
            }
        }
        if(i==j){
            count++;
        }
    }

    cout<<count;

    cout<<abs(count-k);


}