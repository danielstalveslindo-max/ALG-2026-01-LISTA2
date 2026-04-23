#include <stdio.h>

int main(){
    float peso, altura, imc;
    printf("Digite seu peso (em kg): ");
    scanf("%f", &peso);
    printf("Digite sua altura (em cm): ");
    scanf("%f", &altura);

    imc = peso / ((altura / 100.0) * (altura / 100.0));
    printf("Seu IMC e: %.2f\n", imc);
}