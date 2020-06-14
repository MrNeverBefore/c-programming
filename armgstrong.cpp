//Armgstrong number or not
#include<stdio.h>

int main()
{
	int num,temp,i,x,a=0,c=0,k=1;
	printf("enter a number :");
	scanf("%d",&num);
	temp=num;
	while(temp>0)
	{
		temp=temp/10;
		c++;
	}
	temp=num;
	
	
	while(temp>0)
	{
		x=temp%10;
		
		for(i=0;i<c;i++)
			k=k*x;
	
		a=a+k;
		temp=temp/10;
		k=1;
	}
	if(a==num)
		printf("number is armgstrong :");
	else
		printf("not armgstrong :");
}
