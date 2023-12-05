#include<stdio.h>

int main()
{
    int a;
 printf("enter value a : ");
 scanf("%d" , &a);

      if (0 < a)
      {
         printf("This number is Positive");
      }else if (0 > a)
      {
              printf("This number is Negative");
      }else if (0 == a)
      {
      printf("This number is Neutral");
      }
      else
      {
         printf("value is not number"); 
      };
      
      return 0;
}
