/*Answer Assignment-5 C Language LIVE Community Classes MySirg*/
//4. Write a program to calculate the simple interest
#include<stdio.h>
#include<conio.h>

int main()
{
	int principal, time, simple_interest;
	double interest;
	
	printf("Enter Value Of Principal : \n");
	scanf("%d",&principal);
	
	printf("Enter Value Of Interest Per Anum : \n");
	scanf("%lf",&interest);
	
	printf("Enter Value Of Time In Year : \n");
	scanf("%d",&time);
	
	simple_interest = (principal * interest * time)/100;
	//simple interest = (principal * interest * time)/100
	
	printf("Simple Interest : %d",simple_interest);
	
	getch();
}
/*
Submitted By:
Atish Kumar Sahu
kumarsahuatish280301@gmail.com
*/