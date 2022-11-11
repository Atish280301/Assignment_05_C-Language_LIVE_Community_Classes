/*Answer Assignment-5 C Language LIVE Community Classes MySirg*/
/*10. Write a program to calculate the area of a triangle where base and height of the
triangle are given.*/

#include<stdio.h>
#include<conio.h>

int main()
{
	int base, height;
	double area;
	
	printf("Enter Base Value Of Traingle : \n");
	scanf("%d",&base);
	
	printf("Enter Height Value Of Traingle : \n");
	scanf("%d",&height);
	
	area = (height * base) / 2;
	
	printf("Area Of Traingle : %lf",area);
	
	getch();
}
/*
Submitted By:
Atish Kumar Sahu
kumarsahuatish280301@gmail.com
*/