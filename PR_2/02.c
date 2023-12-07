#include <stdio.h>

int main()
{
      int unit;
      float charges;
      printf(" Enter electricity units :");
      scanf("%d", &unit);

      if (unit <= 50)
      {
            charges = unit * 0.50;
      }

      else if (unit <= 150)
      {
            charges = 50 * 0.50 + (unit - 50) * 0.75;
      }
      else if (unit <= 250)
      {
            charges = 50 * 0.50 + 100 * 0.75 + (unit - 150) * 1.20;
      }
      else
      {
            charges = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (unit - 250) * 1.50;
      }

      charges += charges * 20 / 100;

      printf("Electricity Bill = Rs. %.2f\n", charges);
      return 0;
}
