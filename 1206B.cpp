#include <bits/stdc++.h> 
#include<iostream>
#include<math.h>
using namespace std;

int main(){
    long long n,i,j=0,cminus=0,b0=0,cpos=0,x;
    long long m,y,z;
    cin>>n;
    long long a[n];
    
    for(i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<0){
            cminus++;
        }
        if(a[i]==0){
            b0++;
        }
        if(a[i]>0){
            cpos++;
        }
    }
    
    sort(a,a+n);

    if(n==1 && a[0]<-1){
        m=a[0]-1;
        z=abs(m);
        j=j+z;
        cout<<j;
        return 0;
    }
    else if(n==1 && a[0]>1){
        x=a[0]-1;
        j=j+x;
        cout<<j;
        return 0;
    }

    for(i=0;i<n;i++){
        if(b0>0 && (cminus%2==0 || cminus%2!=0)){
            if(a[i]==0){
                j=j+1;
            }
            else if(a[i]>1){
                x=a[i]-1;
                j=j+x;
            }
            else if(a[i]<-1){
                x=abs(a[i]+1);
                j=j+x;
            }
            
        }

        else if(b0==0 && cminus%2==0){
            if(a[i]>1){
                x=a[i]-1;
                j=j+x;
            }
            else if(a[i]<-1){
                x=abs(a[i]+1);
                j=j+x;
            }
        }

        else if(b0==0 && cminus%2!=0){
            if(a[i]<0 && a[i+1]>0 && i!=n-1){
                m=a[i]-1;
                z=abs(m);

                y=a[i+1]+1;
                if(z<y){
                    j=j+z;
                    if(a[i]>1){
                        x=a[i]-1;
                        j=j+x;
                        
                    }
                }
                else{
                    j=j+y;
                    if(a[i]<-1){
                        x=abs(a[i]+1);
                        j=j+x;

            }
                }
            ++i;
            continue;
            }

            else if(i+1==n-1 && cpos==0){
                m=a[i+1]-1;
                z=abs(m);
                j=j+z;
                if(a[i]<-1){
                    x=abs(a[i]+1);
                    j=j+x;
                }
                ++i;
                continue;
            }

            if(a[i]>1){
                x=a[i]-1;
                j=j+x;
            }
            else if(a[i]<-1){
                x=abs(a[i]+1);
                j=j+x;
            }

        }

        

        
    }

cout<<j;



}