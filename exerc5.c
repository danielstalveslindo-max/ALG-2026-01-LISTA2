#include <stdio.h>

int main()
{
    int num1, num2, num3, ordem;
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);
    if (num1 > num2 && num1 > num3) {
        ordem = num1;
        if (num2 > num3) {
            printf("Ordem decrescente: %d, %d, %d\n", ordem, num2, num3);
        } else {
            printf("Ordem decrescente: %d, %d, %d\n", ordem, num3, num2);
        }
    } else if (num2 > num1 && num2 > num3) {
        ordem = num2;
        if (num1 > num3) {
            printf("Ordem decrescente: %d, %d, %d\n", ordem, num1, num3);
        } else {
            printf("Ordem decrescente: %d, %d, %d\n", ordem, num3, num1);
        }
    } else {
        ordem = num3;
        if (num1 > num2) {
            printf("Ordem decrescente: %d, %d, %d\n", ordem, num1, num2);
        } else {
            printf("Ordem decrescente: %d, %d, %d\n", ordem, num2, num1);
        }
    }
system("pause");
}
