#include <stdio.h>

int main()
{

      for (char i = 'A'; i <= 'E'; i++)
      {
            for (char b = i; b >= 'A'; b--)
            {
                  printf("%c", b);
            }

            printf("\n");
      }
      return 0;
}