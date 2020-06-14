#include<stdio.h>

//count the number of repetion of a integer in a digits of number :
int main()
{
	int i,n,temp,a[10]={0};
	printf("Enter a number :");
	scanf("%d",&n);
	while(n>0)
	{
		temp=n%10;
		a[temp]+=1;
		n=n/10;
	}
	for(i=0;i<10;i++)
	{
		if(a[i]>0)
		{
			printf("%d repeats %d times.....\n",i,a[i]);
		}
	}
}

