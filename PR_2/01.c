#include <stdio.h>

int main(int argc, char const *argv[])
{
      int a;
      printf("enter value a :");
      scanf("%d", &a);

      if (a % 2 == 0)
      {
            printf("This number is Even.");
      }
      else
      {
            printf("This number is odd.");
      }

      return 0;
}
