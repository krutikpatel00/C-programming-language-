#include <stdio.h>
#include <conio.h>

int main()
{
	int length, width;
	clrscr();
	printf("enter value length and width ");
	scanf("%d %d", &length, &width);
	int area = length * width;
	printf("the area of the rectangle is  %d", area);
	getch();
}