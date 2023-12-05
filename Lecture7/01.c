#include<stdio.h>

int main()
{
    int a,b,minimum;

    printf("enter value a : ");
    scanf("%d" ,&a);

    printf("enter value a :");
    scanf("%d" ,&b);

      if (a < b) {
        minimum = a;
    } else {
        minimum = b;
    }
    
    printf("The minimum value is: %d\n", minimum);
      
      return 0;
}
