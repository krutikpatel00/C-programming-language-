#include <stdio.h>

int main()
{

      int input;
      int a = 1;
      printf("enter value : ");
      scanf("%d", &input);

      while (a <= input)
      {
            printf("VALUE : %d\n", a);
            a++;
      }

      return 0;
}