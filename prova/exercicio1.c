#include <stdio.h>
#include <locale.h>

/*Codifique um programa em C que solicite ao usuário o valor do consumo
médio (km/litro) de um veículo e o total de combustível disponível (litros) no seu
tanque. Esses valores devem ser armazenados em duas variáveis. Logo após
o recebimento, calcule e apresente a distância total que pode ser percorrida
pelo automóvel.*/

int main() {
    setlocale(LC_ALL, "Portuguese");

    float media, gasolinaRestante, totalDistancia;

    printf("Por favor, digite a media de consumo(km/l) do seu carro: ");
    scanf("%f", &media);
    printf("Digite a quantidade(l) de gasolina restante: ");
    scanf("%f", &gasolinaRestante);
    totalDistancia = (media * gasolinaRestante);
    printf("Distancia restante: %.1f km", totalDistancia);

    return 0;
}