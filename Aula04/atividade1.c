#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	double num1, num2, resul;
	
	printf("Digite o primeiro valor: \n");
	scanf("%lf", &num1);
	printf("Digire o segundo valor: \n");
	scanf("%lf", &num2);
	resul = pow(num1, num2);
	printf("O valor de %0.lf elevado a %0.lf é: %0.2lf", num1, num2, resul);
	return 0;
}
