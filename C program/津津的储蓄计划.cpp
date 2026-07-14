/*#include<bits/stdc++.h>
using namespace std;
int main()
{
	int budget[12],balance[12],deposit[12],i,sum;
	for(i=0;i<12;i++)
	cin>>budget[i];
	sum=0;
	for(i=0;i<12;i++)
	{
		balance[i]=balance[i-1]+300-budget[i];//月初时没交钱时的余额
		deposit[i]=balance[i]/100*100;//交的整百的钱
		sum=sum+deposit[i];//她妈手里的钱
		balance[i]=balance[i]-deposit[i];//实际余额
		if(balance[i]<0)
		{
			sum=1;
			cout<<'-'<<i+1;
			break;
		}
	}
	if(sum!=1)
	cout<<sum*1.2+balance[11];
	return 0;
}*/
#include<iostream>
using namespace std;
int money,cost,mama,flag=1,monthofdeath;  
int main ()
{
    for(int i=1;i<=12;i++)
    {
        money+=300;
        cin>>cost;
        money-=cost;  
           if(money<0)    
           {     
              flag=0; 
              monthofdeath=i;   
              break;        
           }
        mama+=money/100; 
        money%=100;        
    }    
    if(flag==1)      
    {
        money+=mama*120;    
        cout<<money;
    }            
    else
    {
        cout<<-monthofdeath;
    }    
    return 0;
}