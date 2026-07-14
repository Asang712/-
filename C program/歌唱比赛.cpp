#include<stdio.h>
int main()
{
	void sort(float a[],int m);
	float k,b[100]={0},a[100][20];
	int i,j,m,n;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		   scanf("%f",&a[i][j]);
	}
  for(i=0;i<n;i++)
  {
  	sort(a[i],m);
  	for(j=1;j<m-1;j++)
  	{
  		b[i]=b[i]+a[i][j];
	}
  }
  sort(b,n);
  k=b[m-1]/(m-2);
  printf("%1.2f",k);
  return 0;
}

void sort(float a[],int m)
{
	int i,j,k,t;
	for(i=0;i<m;i++)
	{
		k=i;
		for(j=i+1;j<m;j++)
		{
			if(a[k]>a[j])
			   k=j;
		}
		if(k!=i)
		{
			t=a[i];
			a[i]=a[k];
			a[k]=t;
		}
	}
}