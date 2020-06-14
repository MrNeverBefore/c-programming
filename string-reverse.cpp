#include<stdio.h>
char reverse(char x[]);
int strlen(char ar[]);
int main()
{
	char a[100];
	printf("ente a string :");
	gets(a);
	reverse(a);
	printf("the reverse of string sting is  : '%s'",a);
	
}
char * reverse(char *x[])
{
	int i=0,j;
	char temp;
	j=strlen(*x);
	while(j>i)
	{
		temp=x[i];
		x[i]=x[j];
		x[j]=temp;
		i++;
		j--;
	}
	
	return x[];
}
int strlen(char ar[])
{
	int i=0,temp=0;
	while(ar[i]!='\o')
	{
		temp++;
	}
	return temp;
}
