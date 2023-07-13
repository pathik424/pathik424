#include<stdio.h>
int main()
{

int marks;
printf("enter your marks :");
scanf("%d" ,&marks);
printf("I am ");
if(marks>=0 && marks<=33)
{
	printf("fail");
}
else if(marks>=34 && marks<=50)
	{
		printf("Second Class");
	}
	else if(marks>=51 && marks<=80)
	{
		printf("first class");
	}
	else if(marks>=81 && marks<=100)
	{
		printf("Distinction");
	}
}