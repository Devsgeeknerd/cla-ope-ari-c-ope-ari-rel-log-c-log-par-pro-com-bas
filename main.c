#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1;
    int numero2;
    printf("Digite o valor do 1° numero: ");
    scanf("%d", &numero1);
    printf("Digite o valor do 2° numero: ");
    scanf("%d", &numero2);
    print("%d + %d = %d\n", numero1, numero2, numero1 + numero2);
    print("%d - %d = %d\n", numero1, numero2, numero1 - numero2);
    print("%d * %d = %d\n", numero1, numero2, numero1 * numero2);
    print("%d / %d = %d\n", numero1, numero2, numero1 / numero2);
    print("O resto de %d dividido por %d e %d", numero1, numero2, numero1 % numero2);
    return 0;
}
