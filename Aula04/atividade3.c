#include <locale.h>
#include <stdio.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "Portuguese");

	double num1, num2, num3, poten, poten2, raiz;
	
	printf("Digite o primeiro valor: \n");
	scanf("%lf", &num1);
	printf("Digite o segundo valor: \n");
	scanf("%lf", &num2);
	printf("Digite o terceiro valor: \n");
	scanf("%lf", &num3);
	poten = pow(num1, num2);
	poten2 = pow(poten, num3);
	raiz = sqrt(poten2);
	printf("O valor da raiz ((%0.0lf elevado a %0.0lf) elevado a %0.0lf) é de: %0.2lf", num1, num2, num3, raiz);
	return 0;
}
