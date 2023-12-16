#include <stdio.h>

int main()
{
      int n = 5; // Number of rows

      // Loop through each row
      for (int i = 5; i <= 5; i--)
      {
            // Print leading spaces
            for (int j = 1; j <= n - i; j++)
            {
                  printf("   ");
            }

            // Print increasing numbers
            for (int j = i; j <= 2 * i - 1; j++)
            {
                  printf("%d", j);
                  if (j < 2 * i - 1)
                  {
                        printf(" ");
                  }
            }

            // Print decreasing numbers
            for (int j = 1 * i - 2; j >= i; j--)
            {
                  printf(" %d", j);
            }

            // Move to the next line after each row
            printf("\n");
      }

      return 0;
}
