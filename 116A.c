#include<stdio.h>

int main()
{
  int n,i,j,max;
  scanf("%d",&n);
  int m=2*n-1;
  int a[n],b[n],x[n];
  int merge[m];
  for(i=0;i<n;i++)
  {
    scanf("%d%d",&a[i],&b[i]);
    x[i]=b[i];
    //printf("%d ",b[i]);
  }
    x[0]=b[0]-a[1]+b[1];
    for(j=1;j<n-1;j++)
    {

      x[j]=x[j-1]-a[j+1]+b[j+1];
      //printf("%d\n",x[j]);

    }
    for(i=0;i<n;i++)
	{
		merge[i]=b[i];
	}

  for(i=0, j=n; j<m && i<n-1; i++, j++)
	{
		merge[j]=x[i];
	}
    max=merge[0];
    for(j=0;j<m;j++)
    {
      if(merge[j]>max)
      {
        max=merge[j];
      }
    }
    printf("%d",max);


}
