#include<stdio.h>
int main()
{
	int n,i,j,c=1;
	printf("enter n value :");
	scanf("%d",&n);
	for(i=0;i<n;i++)	
	{
		for(j=0;j<=i;j++)
		{
			printf("%d ",c);
			c++;
		}
		printf("\n");
	}
}
