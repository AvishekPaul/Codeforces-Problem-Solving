#include<iostream>
#include<string.h>
using namespace std;
 int main(){
     int n,count=1;
     cin>>n;
    
     string s("");
     string c;
     while(n--){
         cin>>c;
         s+=c;
     }
     int x= s.size();
     for(int i=0;i<x-1;i++){
         if((s[i]=='0' && s[i+1]=='0') || (s[i]=='1' && s[i+1]=='1')){
             count++;

         }
     }
     cout<<count;
 }