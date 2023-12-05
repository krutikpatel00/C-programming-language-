#include<stdio.h>

int main()
{
      int a = 3;
      int b =5;
      int c;

      c = a;
      a = b;
      b = c;
      printf("value a : %d \n" , a);

      printf("value b : %d" , b);

      return 0;
}
