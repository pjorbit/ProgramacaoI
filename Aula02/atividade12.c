#include <stdio.h>
#include <locale.h>


int main() {
	setlocale(LC_ALL, "Portuguese");

	float base, h, area;

	printf("*CALCULAR A �REA DO TRI�NGULO*\n\n");
	printf("Por favor, coloque a base do seu tri�ngulo: ");
	scanf("%f", &base);
	printf("Por favor, coloque a �ltura do seu tri�ngulo: ");
	scanf("%f", &h);
	area = (base * h);
	printf("A �rea do seu tri�ngulo � de: %0.1f", area);
	return 0;
}
