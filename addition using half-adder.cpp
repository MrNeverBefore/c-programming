#include<stdio.h>


//addition of two number without using + operator =using half adder
int main()
{
	int a,b,sum,carry;
	printf("Enter a number :");
	scanf("%d",&a);
	printf("enter b numbr :");
	scanf("%d",&b);
	sum=a;
	while(b!=0)
	{
		sum=a^b;
		carry=(a&b)<<1;
		a=sum;
		b=carry;
	}
	printf("sum = %d",sum);
	
}
