//palindom or not
#include<stdio.h>
int main()
{
	int num,temp,i,x,a=0;
	printf("enter a number :");
	scanf("%d",&num);
	temp=num;
	while(temp>0)
	{
		x=temp%10;
		a=a*10+x;
		temp=temp/10;
	}
	if(a==num)
		printf("its a palindrom :");
	else
		printf("not a palindram");
}
