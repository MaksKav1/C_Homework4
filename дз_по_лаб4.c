#include <stdio.h>

int main()
{
    int A, B;
    int condition;
    printf("Введите два целых числа A и B: ");
    scanf("%d %d", &A, &B);
    condition = (A % 2 == 0 && B % 2 != 0) ||
                (A % 2 != 0 && B % 2 == 0);
    if (condition)
    {
        printf("Направление: Налево\n");
    }
    else
    {
        printf("Направление \"Налево\" не показывается\n");
    }
    return 0;
}