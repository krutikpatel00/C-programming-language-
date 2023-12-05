#include <stdio.h>

int main()
{
      int celsius ;
      printf("enter the celsius value : ");
      scanf("%d", &celsius);

      float fahrenheit  = (celsius * 9/5) + 32;
      printf("Fahrenheit value : %0.2f", fahrenheit);

      return 0;
}
