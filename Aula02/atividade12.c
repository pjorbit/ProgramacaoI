#include <stdio.h>
#include <locale.h>


int main() {
	setlocale(LC_ALL, "Portuguese");

	float base, h, area;

	printf("*CALCULAR A ÁREA DO TRIÂNGULO*\n\n");
	printf("Por favor, coloque a base do seu triângulo: ");
	scanf("%f", &base);
	printf("Por favor, coloque a áltura do seu triângulo: ");
	scanf("%f", &h);
	area = (base * h);
	printf("A área do seu triângulo é de: %0.1f", area);
	return 0;
}
