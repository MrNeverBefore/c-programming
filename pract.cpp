#include<stdio.h>
#include<conio.h>
int rec(int a);
 main()
{
	int n,sum;
	printf("enter the number\n");
	scanf("%d",&n);
	sum=rec(n);
	printf("The sum of the number is:%d",sum);
	return 0;
}
rec(int a)
{
	int sum=0;
	int temp;
	while(a!=0){
	
	
	//temp=a%10;
	sum=sum+a%10;
    a=a/10;
    

}
return (sum);
}
    
    
	
	
	
	
	
	
	//int tem;
	//if (a==0)
	//return(0);
	//else
      //tem=a%10;
      
      //a=a/10;
      //f=f+tem;
    //return ((a%10)+rec(a/10));

