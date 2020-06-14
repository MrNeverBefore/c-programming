#include<stdio.h>


/* Chech wether a date 

is valid or not */
int leapyear(int n)
{
	if(n%4==0 && n%100!=0)
	{
		return 1;
	}
	else if(n%100==0 && n%400==0)
	{
		return 1;
	}
	else 
		return 0;
}
int main()
{
	int date,month,year,temp;
	int a[]={31,28,31,30,31,30,31,31,30,31,30,31};
	int a1[]={31,29,31,30,31,30,31,31,30,31,30,31};
	printf("Enter the date :");
	scanf("%d",&date);
	printf("Enter the month:");
	scanf("%d",&month);
	printf("Enter the year:");
	scanf("%d",&year);
	if((date>0 && date<=31) && (month>0 && month<=12) && (year>0 && year<=2020))
	{
		if(leapyear(year))
		{
			temp=month-1;
			if(date>a1[temp])	
			{
				printf("Invalid date");
			}
			else
				printf("Valid date :");
		}
		else
		{
			temp=month-1;
			if(date>a[temp])	
			{
				printf("Invalid date");
			}
			else
				printf("Valid date :");
		
		}
	}
	
}
