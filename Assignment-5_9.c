/*Answer Assignment-5 C Language LIVE Community Classes MySirg*/
/*9. Write a program to calculate the profit percentage upon selling a product. Cost price
and selling price are given by the user.*/

#include<stdio.h>
#include<conio.h>

int main()
{
	double cost_price, selling_price, profit;
	double profit_percentage;
	
	printf("Enter Cost Price Value : \n");
	scanf("%lf",&cost_price);
	
	printf("Enter Selling Price Value : \n");
	scanf("%lf",&selling_price);
	
	profit = selling_price - cost_price;
	
	profit_percentage = (profit/cost_price);
	
	double answer = profit_percentage * 100;
	
	printf("Profit Percentage Upon Selling Product Is : %lf",answer);
	
	getch();
}
/*
Submitted By:
Atish Kumar Sahu
kumarsahuatish280301@gmail.com
*/