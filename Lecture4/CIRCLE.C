#include <stdio.h>
#include <conio.h>
#define PI 3.14

int main()
{
	int redius;
	clrscr();
	printf("enter redius value ");
	scanf("%d", &redius);
	float circle = PI * redius * redius;
	printf("circle = %.2f", circle);
	getch();
}