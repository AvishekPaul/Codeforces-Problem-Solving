#include <bits/stdc++.h> 
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;


 int main(){
     string s;
     cin>>s;
     long long n=s.size();
     
     long long i,j,a,b,sum=0,sum2=0,count=0,count2=0,c;
     for(i=n-1;i>n/2;i--){
         if(s[i]=='1'){
             a=n-i-1;
             b=pow(2,a);
             sum+=b;
             
         }
     }

     for(i=n/2;i>=0;i--){
         if(s[i]=='1'){
             a=n-i-1;
             b=pow(2,a);
             sum2+=b;
             
         }
     }
    cout<<sum<<endl;
    cout<<sum2<<endl;

     for(i=0;pow(4,i)<=sum;i++){
         count++;
         

     }
     if(sum!=0){
     c=sum-(pow(4,i-1));
     }
     else if(sum==0){
         c=0;
     }

     
     cout<<i<<endl<<count<<endl;
     cout<<c<<endl;

     for(j=i;pow(4,j)<sum2+c;j++){
         count2++;
         if(sum==0 && pow(4,j)==sum2){
             count2--;
         }
     }

     if(pow(4,i-1)==sum && pow(4,j)==sum2){
         count++;
     }


     cout<<count+count2;



 }