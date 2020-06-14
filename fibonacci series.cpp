#include<stdio.h>
int main()
{
	int n,i,sum=0,a=0,b=1;
	printf("enter x value :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%d\t",a);
		sum=a+b;
		a=b;
		b=sum;
	}
}
