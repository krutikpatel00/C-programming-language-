#include <stdio.h>
#include <conio.h>

int main()
{
	int base, heigth;
	clrscr();
	printf("enter value base and heigth :");
	scanf("%d %d", &base, &heigth);
	int triangle = base * heigth / 2;
	printf("triagle = %d", triangle);
	getch();
}