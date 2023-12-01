#include <stdio.h>
#include <conio.h>
#define PI 3.14

int main()
{
	int redius;
	clrscr();
	printf("enter redius value ");
	scanf("%d", &redius);
	float circle = 2 * PI * redius;
	printf("circle = %.2f", circle);
	getch();
}