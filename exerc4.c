#include <stdio.h>

int main()
{
    int a, b, maior, mmc;
    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);
    if (a > b) {
        maior = a;
    } else {
        maior = b;
    }
    while (1) {
        if (maior % a == 0 && maior % b == 0) {
            mmc = maior;
            break;
        }
        maior++;
    }
    printf("O MMC de %d e %d e: %d\n", a, b, mmc);
    system("pause");
}