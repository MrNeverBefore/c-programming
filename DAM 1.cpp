#include<stdio.h>
#include<stdlib.h>
struct student
{
	char name[30];
	int roll;
	float per;
	
};
 int main()
{
	
	struct student *text;
	text=(struct student*)malloc(1*sizeof(struct student));
	printf("enter the name of student");
    gets(text->name);
	printf("enter the roll no of student");
	scanf("%d",&roll);
	printf("enter the percentage of student");
	scanf("%f",&per);
	printf("ENTER DETAILS IS:");
	printf("roll no %d,percentage %lf",name,roll,per);
	
	return 0;
	
}
