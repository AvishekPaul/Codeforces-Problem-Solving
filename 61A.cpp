#include<iostream>
#include <cstring>
#include<string.h>
using namespace std;

int main(){
    char s1[100];
    char s2[100];
    
    cin>>s1;
    cin>>s2;
    int n = strlen(s1);

    for(int i=0;i<n;i++){
        if((s1[i]=='1' && s2[i]=='1') || (s1[i]=='0' && s2[i]=='0')){
            cout<<'0';
        }
        else if((s1[i]=='1' && s2[i]=='0') || (s1[i]=='0' && s2[i]=='1')){
            cout<<'1';
        }
    }
}