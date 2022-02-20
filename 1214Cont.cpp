#include <bits/stdc++.h> 
#include<iostream>
#include<math.h>
using namespace std;
 int main(){
     long long n,d,e,a,b,i,j,c;
     cin>>n;
     cin>>d;
     cin>>e;
     long long diff=n;
     if(n%d==0 || n%(5*e)==0){
         cout<<"0";
         return 0;
     }
     for(i=0;i*5*e<=n;i++){
         a=(n-i*5*e)%d;
         if(a<diff){
             diff=a;
         }
         
         
        }

      

     cout<<diff;
     return 0;
     

    }
