#include <bits/stdc++.h> 
#include<iostream>
#include<math.h>
using namespace std;
 int main(){
     int t;
     long long strth, intnce, expence,i,j,a,b;
     cin>>t;


     while(t--){
         cin>>strth>>intnce>>expence;
         i=expence;
         a=strth;
         b=intnce;
         long long count=0;
         if(strth>intnce && expence==0){
             cout<<"1"<<endl;
             continue;
         }

         strth=a+i;
         intnce=b+(expence-i);

         
         while(strth>intnce){
             
             
             if(strth>intnce){
                 count++;
             }
             i--;
             strth=a+i;
             intnce=b+(expence-i);

             if(strth==a && intnce==b){
                 break;
             }

         }
         
         

         cout<<count<<endl;

     }
     }
 