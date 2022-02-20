#include<stdio.h>
#include<string.h>

int main()
{
  int i,j;
  char c[100];
  gets(c);
  int n=strlen(c);
  int count=0;
  for(i=0;i<n;i++)
  {
    int flag=0;
    for(j=0;j<i;j++)
    {

      if(c[j]==c[i])
      {
        flag=1;
        break;


      }

    }
    if(!flag)
    {
      count++;
    }
  }
  //printf("%d\n",count);
  if(count%2!=0)
  {
    printf("IGNORE HIM!");
  }
  else
  {
    printf("CHAT WITH HER!");
  }

}
