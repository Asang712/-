#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	char s[13];
	int a,i,j;
	scanf("%s",s);
	a=0,j=1;
	for(i=0;i<=10;i++)
	{
		if(i!=1&&i!=5)
		{
			a=a+(s[i]-48)*j;
			j++;
		}
	}
	j=a%11;
	if(j==(s[12]-48))
	cout<<"Right";
	else
	{
		if(j!=10)
		s[12]=j+48;
		else
		s[12]='X';
		cout<<s;
	}
	return 0;
}