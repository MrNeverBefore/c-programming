#include<stdio.h>

int fact(int n)
{
	int i,s=1;
	if(n==0)
	{
		return 1;
	}
	for(i=n;i>1;i--)
	{
		s=s*i;
	}
	return s;
	
}
int main()
{
	int x,m,temp,sum=0;
	
		printf("enter a number :");
		scanf("%d",&x);
	m=x;
	while(m>0)
	{
		temp=m%10;
		sum=sum+fact(temp);
		m=m/10;	
	}
	if(sum==x)	
		printf("number is strong :");
	else
		printf("not strong :");
		
	
	
}

