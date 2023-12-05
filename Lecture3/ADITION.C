#include <stdio.h>
#include <conio.h>

main()
{
      int a, b, c, d, e, f, g;
      clrscr();

      a = 12;
      b = 6;
      c = a + b;
      d = a - b;
      e = a * b;
      f = a / b;
      g = a % b;

      printf("additon of %d and %d is %d\n", a, b, c);
      printf("subtraction of %d and %d is %d\n", a, b, d);
      printf("multiplication of %d and %d is %d\n", a, b, e);
      printf("division of %d and %d is %d\n", a, b, f);
      printf("modulo of %d and %d is %d\n", a, b, g);
      getch();
}