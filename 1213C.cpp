#include <bits/stdc++.h> 
#include<iostream>
#include<math.h>
using namespace std;
 int main(){
     int q;
     cin>>q;
     long long n,m,i,j,a,b,c,sum;
     long long x;

     while(q--){
         cin>>n>>m;
         long long s2=0;

         if(m%10==0){
             cout<<"0"<<endl;
             continue;
         }
         if(m>n){
              cout<<"0"<<endl;
              continue;
         }

         if((m%10)%5==0){
             
             a=m*2;
             b=n/a;
             c=n%a;
             sum=b*5;
             for(i=m;i<=c;i+=m){
                 x=i%10;
                 s2+=x;
             }
             sum=sum+s2;

         }

         else if((m%10)%2==0){
             
             a=m*5;
             b=n/a;
             c=n%a;
             sum=b*20;
             for(i=m;i<=c;i+=m){
                 x=i%10;
                 s2+=x;
             }
             sum=sum+s2;

         }
         else if((m%10)%2!=0){
             a=m*10;
             b=n/a;
             c=n%a;
             sum=b*45;
             for(i=m;i<=c;i+=m){
                 x=i%10;
                 s2+=x;
             }
             sum=sum+s2;

         }

         cout<<sum<<endl;
     }
 }