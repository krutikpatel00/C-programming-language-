
#include <stdio.h>

int main() {
    float firstAngle, secondAngle, thirdAngle;

  
    printf("Enter the first angle: ");
    scanf("%f", &firstAngle);
    printf("Enter the second angle: ");
    scanf("%f", &secondAngle);

   
    thirdAngle = 180 - (firstAngle + secondAngle);

   
    printf("Third angle: %.2f\n", thirdAngle);

    return 0;
}