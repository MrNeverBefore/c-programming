#include<stdio.h>
//binary to decimal number
int pow(int x,int y)
{
	int i,sum=1;
	for(i=0;i<y;i++)
	{
		sum=sum*x;
	}
	return sum;
}
int main()
{
	int x,n,i,sum=0,a=0,b=1,m=2;
	printf("enter x value :");
	scanf("%d",&n);
	b=n;
	i=0;
	while(b>0)
	{
		a=b%10;
		x=pow(m,i);
		
		sum=sum+a*x;
		i++;
		b=b/10;
	}
	printf("decimal = %d",sum);
}
