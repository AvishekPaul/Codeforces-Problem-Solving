#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    int s[n*2];
    for(int i=0;i<n*2;i++){
        cin>>s[i];
    }
    for(int i=0;i<n*2-2;i++){
        for(int j=i+1;j<n*2;j=j+2){
        if(s[i]==s[j]){
            count++;
        }
        
        
    }
    }
    cout<<count;
        
}