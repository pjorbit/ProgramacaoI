#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	double cm, metros;
	printf("Transformador de cent�metros em metros.\n");
	printf("Por favor, digite a quantidade de cent�metros: ");
	scanf("%lf", &cm);
	metros = (cm / 100);
	printf("O valor em metros � de: %0.2lf", metros);
	
	return 0;
}
