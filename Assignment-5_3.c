/*Answer Assignment-5 C Language LIVE Community Classes MySirg*/
//3. Write a program to calculate the volume of a Cuboid.
#include<stdio.h>
#include<conio.h>

int main()
{
	int length, width, height, volume;
	
	printf("Enter Length Of The Cuboid : \n");
	scanf("%d",&length);
	
	printf("Enter Width Of The Cuboid : \n");
	scanf("%d",&width);
	
	printf("Enter Height Of The Cuboid : \n");
	scanf("%d",&height);
	
	volume = length * width * height; //Area Of Cuboid = (length * width * height)cubic unit

	printf("Volume Of Cuboid : %d",volume);
	
	getch(); 
}
/*
Submitted By:
Atish Kumar Sahu
kumarsahuatish280301@gmail.com
*/