#include <bits/stdc++.h> 
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
int main(){
    int n,k,i,j,x;
    cin>>x;
    string s;
    for(i=1;i<=x;i++){
        int count=0;
        cin>>s;
        n=s.size();
        for(j=0,k=n-1;j<n;j++,k--){
            if(s[j]==s[k]){
                continue;
            }
            else if(s[j]!=s[k]){
                int y=1;
                while(1){
                    
                    if(s[j]==s[k-y]){
                        count+=y;
                        k=k-y;
                        break;
                    }
                    else if(s[j+y]==s[k]){
                        count+=y;
                        j=j+y;
                        break;
                    }
                    
                    else{
                        y++;
                    }
                    


                }
            }

            

            if(j==k-1){
                break;
            }

        }

         printf("Case %d: %d\n",i,count);


    }

}


        