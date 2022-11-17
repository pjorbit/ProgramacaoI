#include <stdio.h>
#include <locale.h>

/*Codifique um programa em C que solicite ao usuário um número inteiro, que representa a
distância em quilômetros (Km) entre duas cidades. Após o recebimento da distância, converta
esse valor para metros (m). Considere que 1 Km = 1000 m. Veja os exemplos a seguir:
Calculo valorcnvertido=valorkilometro*1000;*/

int main() {
    setlocale(LC_ALL, "Portuguese");

    int distanciaKM, distanciaMetros;

    printf("Entre com a distancia entre as cidades: \n");
    scanf("%d", &distanciaKM);
    distanciaMetros = (distanciaKM*1000);
    printf("Sua distancia em metros: %d", distanciaMetros);
    return 0;
}