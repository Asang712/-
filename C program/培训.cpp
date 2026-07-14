#include<stdio.h>
struct student
{
	char name[20];
	int year;
	int score;
}s[5];

int main()
{
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s%d%d",s[i].name,&s[i].year,&s[i].score);
		s[i].score=s[i].score*1.2;
		s[i].year++;
		if(s[i].score>600)
		s[i].score=600;
	}
	for(i=0;i<n;i++)
		printf("%s %d %d\n",s[i].name,s[i].year,s[i].score);
	return 0;
}