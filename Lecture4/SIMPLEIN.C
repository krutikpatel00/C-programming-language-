#include <stdio.h>
#include <conio.h>

int main()
{
	float principal, rate, time, simpleInterest;
	clrscr();
	printf("enter value base and heigth :");
	scanf("%f", &principal);

	printf("enter value base and heigth :");
	scanf("%f", &rate);
	printf("enter value base and heigth :");
	scanf("%f", &time);
	simpleInterest = (principal * rate * time) / 100;
	printf("simple interest = %0.2f", simpleInterest);
	getch();
}