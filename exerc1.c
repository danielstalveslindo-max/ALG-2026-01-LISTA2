#include <stdio.h>

int main()
{
int segundos, horas, minutos;

printf("Digite o numero total de segundos: ");
scanf("%d", &segundos);

horas = segundos / 3600;
minutos = (segundos % 3600) / 60;
segundos = segundos % 60;

printf("%d horas, %d minutos %d segundos\n", horas, minutos, segundos);
system("pause");
}