#include <stdio.h>

int main()
{
      int a;
      printf("Enter array size: ");
      scanf("%d", &a);

      int size[a];
      for (int i = 0; i < a; i++)
      {
            printf("Enter array elements ");
            scanf("%d", &size[i]);
      }          

      printf(" Length of an Array : % d\n ", a);
      return 0;
}
