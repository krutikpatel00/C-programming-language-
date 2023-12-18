#include <stdio.h>

int main()
{
      int a, b;

      printf("enter value a :");
      scanf("%d", &a);

      int size1[a];

      for (int i = 0; i < a; i++)
      {
            printf("enter a[%d]", i);
            scanf("%d", &size1[i]);
      }

      printf("enter value b :");
      scanf("%d", &b);

      int size2[b];

      for (int i = 0; i < b; i++)
      {
            printf("enter b[%d]", i);
            scanf("%d", &size2[i]);
      }

      int c = a + b;
      int size3[c];

      for (int i = 0; i < a; i++)
      {
            size3[i] = size1[i];
      }
      for (int i = 0; i < b; i++)
      {
            size3[a + i] = size2[i];
      }

      printf("Merged Array: ");
      for (int i = 0; i < c; i++)
      {
            printf("%d ", size3[i]);
      }
      return 0;
}
