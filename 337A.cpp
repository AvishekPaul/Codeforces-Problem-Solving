#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int f[m],f2[m-n+1],f3[n],temp;

    for(int i=0;i<m;i++)
    {
        cin>>f[i];
    }
    for(int i=0; i<m;i++){
        for(int j=i+1;j<m;j++){
            if(f[j]<f[i]){
                temp=f[j];
                f[j]=f[i];
                f[i]=temp;

            }
        }
    }
    
    for(int i=0,j=n-1;i<m-n+1;i++,j++){

            
            f2[i]=abs(f[j]-f[i]);
            
        }
    
    int x =sizeof(f2)/sizeof(f2[0]);
    
    int minimum = f2[0];
   
    for (int i=1;i<x;i++)
    {
        if (f2[i] < minimum)
        {
           minimum = f2[i];
           
        }
    }
    cout<<minimum;
    
    

    
    

    

}