#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(){
    int t,n,cdig,m;
    cin>>t;
    while(t--){
        cin>>n;
        cdig=0;
        int count=0;
        int x[5]={0};
        int a=n;
        if(n<=9){
            cout<<"1\n";
            cout<<n<<endl;
        }
        else{
        while(a!=0){
            cdig++;
            a=a/10;
        }
        
        for(int i=0,j=10;i<cdig;i++,j=j*10){
            if(n%j!=0){
                m=n%j;
                count++;
                x[i]=m;
                n=n-m;
                
            }
            
        }

        cout<<count<<endl;
        for(int i=0;i<cdig;i++){
            if(x[i]!=0){
                cout<<x[i]<<" ";
            }
        }
        cout<<endl;

        }
    }
}