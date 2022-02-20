#include<stdio.h>
#include<string.h>

int main()
{
  int i,j,count=0,don=0;
  char c[100];
  gets(c);
  int n=strlen(c);
  for(i=0;i<n;i++)
  {
    if(c[i]=='1')
    {
      count++;
      if(c[i+1]=='0'&& count<7)
      {
        count=0;
        continue;
      }
    }

    else if(c[i]=='0')
    {
      count++;
      if(c[i+1]=='1'&& count<7)
      {
        count=0;
        continue;
      }
    }

}

if(count>=7)
{
  printf("YES");
}
else
{
  printf("NO");
}
}
