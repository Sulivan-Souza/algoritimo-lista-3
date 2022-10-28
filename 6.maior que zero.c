#include <stdio.h>

int main()
{
    int A;

    printf("Digite um numero : ");
    scanf("%d", &A);

    if (A > 0)
        printf("%d  maior que zero.", A);
    else if (A < 0)
        printf("%d  menor que zero.", A);
    else if (A == 0)
        printf("%d  zero.", A);
    else if (A >= 0)
        printf("%d igual zero.", A);


    return 0;
}
