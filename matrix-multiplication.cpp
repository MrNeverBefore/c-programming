#include<stdio.h>
//Matrix multiplication
#define S 50

int main()
{
	int i,j,k=0,n,r1,c1,r2,c2,m,a[S][S],b[S][S],c[S][S],sum=0;
	printf("Enter the size of first marix :\n");
	scanf("%d%d",&r1,&c1);
	printf("Enter the size of second marix :\n");
	scanf("%d%d",&r2,&c2);
	if(c1==c2)
	{
		printf("Enter the value of 1st matrix  :\n\n\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				printf("a[%d][%d]= ",i,j);
				scanf("%d",&a[i][j]);
			}
			
		}
		
		printf("\n\nEnter the value of 2nd matrix  :\n\n\n");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				printf("b[%d][%d]= ",i,j);
				scanf("%d",&b[i][j]);
			}
			
		}
		
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				for(k=0;k<c1;k++)
					sum=sum+a[i][k]*b[k][j];
					
				c[i][j]=sum;
			sum=0;
			}
			
		}
		printf("\n\nAnswer  :\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				printf("%d ",c[i][j]);
				
			}
			printf("\n");
		}
	}
	else
		printf("Inavlif Matrix size :");
	
}
