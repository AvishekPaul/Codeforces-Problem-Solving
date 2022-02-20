#include<iostream>
#include <cmath>
using namespace std;

int main(){
    int n,i,j,k,x=0,y=0;
    cin>>n;

    for(i=4;i<=n/2;i++){
        if(x==1 && y==1){
            break;
                }    
        for(j=n-i;j>=4;j--){
            if(i+j==n){
                x=0;y=0;
                 for(k = 2; k <= sqrt(i); k++)  
                    {  
                        if(i % k == 0)  
                        {   
                            x=1;
                            break;  
                        }  
                    }  

                    for(k = 2; k <= sqrt(j); k++)  
                    {  
                        if(j % k == 0)  
                        {   
                            y=1;
                            break;  
                        }  
                    } 
                if(x==1 && y==1){
                    cout<<i<<" "<<j;
                    break;
                }     
            }
        }
    }
}