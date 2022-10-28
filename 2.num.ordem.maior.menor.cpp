#include <stdio.h>
using namespace std;

int main()

{       int num1, num2,t;
        printf("Digite o primeiro numero: ");
        scanf("%d", &num1);
        printf("Digite o segundo numero: ");
        scanf("%d", &num2);
        if ( num1 > num2)
        {
            t = num2;
            num2 = num1;
            num1 = t;
        }
        printf("\n%d, %d", num1,num2);

        return(0);

}
