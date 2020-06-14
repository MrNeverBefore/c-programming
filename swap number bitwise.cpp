#include<stdio.h>


//swaping of two number using bitwise operator
int main()
{
	int a,b;
	printf("Enter a number :");
	scanf("%d",&a);
	printf("enter b numbr :");
	scanf("%d",&b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("the valuse of \na = %d\nb = %d",a,b);
	return 0;
}
