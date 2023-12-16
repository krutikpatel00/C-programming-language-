#include <stdio.h>

int main()
{
      int a;
      printf("Enter array size: ");
      scanf("%d", &a);

      int size[a];
      printf("Enter array elements:\n");
      for (int i = 0; i < a; i++)
      {
            printf("a[%d] =", i);
            scanf("%d", &size[i]);
      }

      int sum = 0;
      for (int i = 0; i < a; i++)
      {
            sum += size[i];
      }

      float average = (float)sum / a;
      printf("average %.1f", average);
      return 0;
}
