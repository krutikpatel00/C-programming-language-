#include <stdio.h>

int main()
{
      int N, i, a = 0, b = 1, nextTerm;

     
      printf("Enter any number: ");
      scanf("%d", &N);

     
      printf("0, 1");
      for (i = 3; i <= N; i++)
      {
            nextTerm = a + b;
            printf(", %d", nextTerm);
            a = b;
            b = nextTerm;
      }

      return 0;
}