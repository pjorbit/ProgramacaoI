#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	float comprimento, largura, area;
	
	printf("*IMOBILI�RIA VENDE MARES*\n");
	printf("*CALCULANDO A �REA DO SEU TERRENO*\n\n");
	printf("Por favor, coloque o comprimento do seu terreno: ");
	scanf("%f", &comprimento);
	printf("Por favor, coloque a largura do seu terreno: ");
	scanf("%f", &largura);
	area = (comprimento * largura);
	printf("A �rea do seu terreno � de: %0.1f", area);
	return 0;
}

