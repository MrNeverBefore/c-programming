#include<stdio.h>
#include<conio.h>
#include<limits.h>

int main()
{
  int x,i,sum=0;
	printf("Ener a number :");
	scanf("%d",&x);
	for(i=1;i<x;i++)
	{
		if(x%i==0)
		sum=sum+i;
	}
	if(sum==x)
	{
		printf("the number is perfect number :");
	}
	else
	{
		printf("not perfect :");
	}
}
