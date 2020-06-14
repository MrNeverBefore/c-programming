#include<stdio.h>
int main()
{
	int x,y,neg;
	printf("enter x value :");
	scanf("%d",&x);
	printf("enter y value :");
	scanf("%d",&y);
	if(x<0||y<0)
	{
		if(x<0)
		{
		neg=x;
		while(neg<0){
		
			y--;
		neg++;	
		}
		printf("sum = %d",y);
	}
	else
	{
		neg=y;
		while(neg<0){
		
			x--;
		neg++;	
		}
		printf("sum = %d",x);
	}
	}
	else
	{
		while(y>0)
		{
		
			x++;
			y--;	
		}
		printf("sum = %d",x);
	}
	
}
