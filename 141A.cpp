#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main(){
    string s1,s2,s;
    cin>>s1;
    cin>>s2;
    cin>>s;

    string result=s1+s2;
    

    sort(result.begin(), result.end());

    sort(s.begin(), s.end());

    if(result==s){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

   

}