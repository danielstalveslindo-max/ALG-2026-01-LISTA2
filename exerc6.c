#include <stdio.h>

int main() {
    int soma = 0;
    int i, j;

    for (i = 0; i <= 6; i++) {
        for (j = i; j <= 6; j++) { 
            if (i == 4 || j == 4) {
                soma += (i + j);
            }
        }
    }

    printf("A soma de todos os numeros das pecas que contem o 4 eh: %d\n", soma);
    return 0;
    system("pause");
}