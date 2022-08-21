#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	float srioMin, srioUser, qntSalarios;
	srioMin = 1212.00;
	printf("*CALCULAR SALÁRIO MÍNIMO*\n\n");
	printf("Por favor, coloque o seu salário: ");
	scanf("%f", &srioUser);
	qntSalarios = (srioUser / srioMin);
	printf("Você recebe %0.1f salários mínimos.", qntSalarios);
	return 0;
}
