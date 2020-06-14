#include<stdio.h>

int prime(int n)
{
	int i,s=1;
	if(n==2)
	{
		return 1;
	}
	else
	{
	
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		return 0;
	}
	return 1;
} 
	
}
int main()
{
	int x,m,temp,sum=0;
	
		printf("enter a number :");
		scanf("%d",&x);
		
	if(prime(x))
	{
		printf("Its a prime number :");
		
	}
	else
	{
		printf("not prime :");
	}
		
	
	
}

