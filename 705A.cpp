#include <bits/stdc++.h> 
#include<iostream>
#include<string.h>
using namespace std;

int main(){
    int n,i;
    cin>>n;
    string s1("I hate");
    string s2(" that I love");
    string s3(" that I hate");
    string s4(" it");

    string s;
    s=s1;
    
    for(i=2;i<=n;i++)
    {
        if(i%2==0){
            s+=s2;
        }
        else{
            s+=s3;
        }
    }

    s+=s4;

    cout<<s;

}