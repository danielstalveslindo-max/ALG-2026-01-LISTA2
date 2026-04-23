#include <stdio.h>

int main()
{
    float mb, mbps;
    printf("Digite o tamanho do arquivo em megabytes (MB): ");
    scanf("%f", &mb);
    printf("Digite a velocidade da conexao em megabytes por segundo (Mbps): ");
    scanf("%f", &mbps);
    int tempo_segundos = (mb * 8) / mbps;
    int horas = tempo_segundos / 3600;
    int minutos = (int)(tempo_segundos % 3600) / 60;
    int segundos = (int)tempo_segundos % 60;
    printf("Tempo estimado para download: %d horas, %d minutos e %d segundos\n", horas, minutos, segundos);
    system("pause");

}