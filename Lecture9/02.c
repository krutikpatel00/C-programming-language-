#include <stdio.h>

int main()
{
      int a, b;
      printf("Press 1 for English");
      printf("Press 2 for Hindi");
      printf("Press 3 for Gujarati");
      printf("Enter your choice : ");
      scanf("%d", &a);

      switch (a)
      {
      case 1:
            printf("Press 1 for English");
            printf("Press 2 for Hindi");
            printf("Press 3 for Gujarati");
            printf("Enter your choice :");
            scanf("%d", &b);

            switch (b)
            {
            case 1:
                  printf("Aapne safaltapurvak Internet Recharge kar liya he.");
                  break;
            case 2:
                  printf("You have successfully done Top-up Recharge.");

                  break;
            case 3:
                  printf("Tame safaltapurvak Special Recharge karyu chhe.");
                  break;

            default:
                  printf("enter valide number");
                  break;
            }
            break;
      case 2:
            printf("Press 1 for English");
            printf("Press 2 for Hindi");
            printf("Press 3 for Gujarati");
            printf("Enter your choice :");
            scanf("%d", &b);

            switch (b)
            {
            case 1:
                  printf("Aapne safaltapurvak Internet Recharge kar liya he.");
                  break;
            case 2:
                  printf("You have successfully done Top-up Recharge.");

                  break;
            case 3:
                  printf("Tame safaltapurvak Special Recharge karyu chhe.");
                  break;

            default:
                  printf("enter valide number");
                  break;
            }
            break;
            break;
      case 3:
            printf("Press 1 for English");
            printf("Press 2 for Hindi");
            printf("Press 3 for Gujarati");
            printf("Enter your choice :");
            scanf("%d", &b);

            switch (b)
            {
            case 1:
                  printf("Aapne safaltapurvak Internet Recharge kar liya he.");
                  break;
            case 2:
                  printf("You have successfully done Top-up Recharge.");

                  break;
            case 3:
                  printf("Tame safaltapurvak Special Recharge karyu chhe.");
                  break;

            default:
                  printf("enter valide number");
                  break;
            }
            break;
            break;
      default:
            printf("not valide");
            break;
      }
      return 0;
}
