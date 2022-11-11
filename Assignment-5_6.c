/*Answer Assignment-5 C Language LIVE Community Classes MySirg*/
//6. Write a program to calculate the average of three numbers
#include<stdio.h>
#include<conio.h>

int main()
{
	int num1, num2, num3;
	double average;
	
	printf("Enter First Number : \n");
	scanf("%d",&num1);
	
	printf("Enter Second Number : \n");
	scanf("%d",&num2);
	
	printf("Enter Third Number : \n");
	scanf("%d",&num3);
	
	average = (num1 + num2 + num3)/3;
	
	printf("Average of %d, %d, %d : %lf",num1, num2, num3,average);
	
	getch();
}
/*
Submitted By:
Atish Kumar Sahu
kumarsahuatish280301@gmail.com
*/