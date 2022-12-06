#include <stdio.h>
#include <locale.h>

/*Construir um programa que chame a função área quadrado:
Nome da função: areaquadrado
Recebe: O valor do lado
Objetivo: Calcular a área do quadrado
Retorno: Retornar o valor do calculo*/

float areaQuadrado(float res);

int main() {
    setlocale(LC_ALL, "Portuguese");

	float area, lado;
	printf("Digite o valor de um dos lados: \n");
	scanf("%f", &lado);
	area = areaQuadrado(lado);
	printf("A area do seu quadrado e de: %0.1f", area);

    return 0;
}

float areaQuadrado(float res) {
	float a;
	a = (res * res);
	return a;
}