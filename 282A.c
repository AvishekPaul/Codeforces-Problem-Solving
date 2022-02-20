#include<stdio.h>

int main()
{
int n,i,j,count=0;
scanf("%d",&n);
char s[3];

for(i=0;i<=n;i++)
{
  gets(s);

  if((s[0]=='+'&&s[1]=='+'&&s[2]=='X')||(s[0]=='X'&&s[1]=='+'&&s[2]=='+'))
  {
  count++;
    }
  else if((s[0]=='-'&&s[1]=='-'&&s[2]=='X')||(s[0]=='X'&&s[1]=='-'&&s[2]=='-'))
  {
  count--;
}


}
printf("%d",count);

}
