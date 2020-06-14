#include<stdio.h>
#include<stdlib.h>
int main()
{
	int r,c,i,j,count=0;
	int **arr;
	printf("enter the value of r \n");
	scanf("%d",&r);
	printf("enter the value of c \n");
	scanf("%d",&c);
	arr=(int **)malloc(r*sizeof(int*));
	
	for(i=0;i<r;i++)
	arr[i]=(int *)malloc(c*sizeof(int));
	
	
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	arr[i][j]=+-count;
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	printf("%d\n",arr[i][j]);
	return 0;
	
}
