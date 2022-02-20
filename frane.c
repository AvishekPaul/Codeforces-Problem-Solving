#include<stdio.h>
#include<math.h>
int main(){
    int n,count;
    scanf("%d",&n);
    for(int i=2;i<=sqrt(n);i++){
     if(n==2){
         count=1;
         break;
     }
     else if(n==3){
         count=2;
         break;
     }
     else if(n%i==0){
         count=n-n/i;
         break;
     }
     else{
         count=n-1;
     }
    }
     printf("%d",count);
}
