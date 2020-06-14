#include<stdio.h>

//decimal to binary
int main()
{
	int num,x,i,temp,sum=0;
	printf("Enter a number :");
	scanf("%d",&num);
	x=num;
	while(num>0)
	{
		temp=num%2;
		sum=sum*10+temp;
		num=num/2;
	}
	while(sum>0)
	{
		temp=sum%10;
		num=num*10+temp;
		sum=sum/10;
	}
	
	printf("binary of %d = %d",x,num);
}
