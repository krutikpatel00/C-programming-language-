#include <stdio.h>

int main()
{
    int a, b, c;
    printf("enter value a : ");
    scanf("%d", &a);
    printf("enter value b : ");
    scanf("%d", &b);
    printf("enter value c : ");
    scanf("%d", &c);

    a < b
        ? a < c
              ? printf("min value a")
              : printf("min va;ue c")
    : b < c
        ? printf("min value b")
        : printf("min value c");

    return 0;
}
