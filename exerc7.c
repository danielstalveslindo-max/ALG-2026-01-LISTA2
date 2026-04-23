#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero_sorteado, palpite, tentativas = 0;
    srand(time(NULL));
    
    numero_sorteado = rand() % 101;
    
    printf("*** Jogo da Adivinhacao ***\n");
    printf("Tente acertar o numero sorteado (entre 0 e 100).\n\n");
    
    while (1) {
        printf("Digite seu palpite: ");
        scanf("%d", &palpite);
        tentativas++;
        
        if (palpite < numero_sorteado) {
            printf("O numero sorteado e MAIOR que %d.\n\n", palpite);
        } else if (palpite > numero_sorteado) {
            printf("O numero sorteado e MENOR que %d.\n\n", palpite);
        } else {
            printf("\nParabens! Voce acertou!\n");
            printf("Numero sorteado: %d\n", numero_sorteado);
            printf("Tentativas realizadas: %d\n", tentativas);
            break;
        }
    }
    system("pause");
    return 0;
}