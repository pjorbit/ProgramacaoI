#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");

	double num1, num2, poten, raiz;
	
	printf("Digite o primeiro valor: \n");
	scanf("%lf", &num1);
	printf("Digite o segundo valor: \n");
	scanf("%lf", &num2);
	poten = pow(num1, num2);
	raiz = sqrt(poten);
	printf("O valor da raiz (%.0lf elevado a %.0lf) é de: %0.2lf", num1, num2, raiz);
}
