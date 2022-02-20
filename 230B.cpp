#include <bits/stdc++.h> 
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

bool status[1000000 + 1];

void siv(long long N) {
    long long sq = sqrt(N);

    for (int i = 4; i <= N; i += 2) {
        status[i] = 1;
    }

    for (int i = 3; i <= sq; i += 2) {
        if (status[i] == 0) {
            for (int j = i * i; j <= N; j += i)
                status[j] = 1;
        }
    }

    status[1] = 1;
}
int main(){
    long long n,y,i,j;
    cin>>n;
    long long a[n];
    long long count;
    siv(1000000);
    for(i=0;i<n;i++){
        cin>>a[i];
    }
 
    for(i=0;i<n;i++){
        count=2;
        if(a[i]==1){
            cout<<"NO"<<endl;
            continue;
        }
 
        y=sqrt(a[i]);
        if(y*y==a[i]){

            if(status[y]==0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
 
        else{
            cout<<"NO"<<endl;
        }
 
        
    }
 
 
}