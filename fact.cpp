#include<stdio.h>
#include<math.h>
float fact(int i)
{
	if(i==0)
	return 1;
	else
	return fact(i-1)*i;
}
main()
{
	int i,x;
	float n,sum=0;
	printf("enter the power of ");
	scanf("%d",&x);
//	printf("enter the value of last term ");
//	scanf("%f",&n);
	float temp;
	
	i=4;
	int j=1;
	
	while(x>0)
	{
	
	temp= 1/fact(i);
	
	
	if(j%2==0)
	sum=sum-temp;
	else
	sum=sum+temp;
	i=i+2;
	x--;
	j++;
	
}
	printf("the ans is %f",sum);
	
}
