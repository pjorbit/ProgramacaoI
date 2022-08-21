#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	double cm, metros;
	printf("Transformador de centímetros em metros.\n");
	printf("Por favor, digite a quantidade de centímetros: ");
	scanf("%lf", &cm);
	metros = (cm / 100);
	printf("O valor em metros é de: %0.2lf", metros);
	
	return 0;
}
