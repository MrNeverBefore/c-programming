#include<stdio.h>
#include<stdlib.h>
main()
{
	char *text,n,i,x,sum=0;
	printf("enter the number");
	gets(n);
	text=(int*)malloc(n*sizeof(int));
	for(i=1;i<=n;i++)
	{
		printf("enter the %d element",i);
		scanf("%d",(text+i));
	
	sum=(sum)+*(text+i);
}
     for(i=1;i<=n;i++){
	 
    printf("your enter element is %d\n\n",*(text+i));
}
	printf("The sum of %d element is %d",n,sum);
	
}
