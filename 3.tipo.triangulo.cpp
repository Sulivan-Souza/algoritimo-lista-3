#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    printf("Digite o valor  de a: ");
    scanf("%d", &a );
    printf("Digite o valor de b: ");
    scanf("%d" ,&b);
    printf("Digite o valor de c: ");
    scanf("%d" ,&c);

    if (a+b>c  &&  a+c>b  && b+c>a)  {
        printf("Os 3 lados formam um triangulo!\n");
            if ( a == b && a ==c)
               printf("Triangulo Equilatero");
                else
                    if ((a == b ) || (b == c) || (a == c))
                        printf("Triangulo Isosceles\n");
                else
                  printf("Escaleno\n");
        }
               else
        printf("Os 3 lados NAO formam um triangulo!\n");

        return 0;
}
