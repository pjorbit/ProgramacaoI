#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	float srioMin, srioUser, qntSalarios;
	srioMin = 1212.00;
	printf("*CALCULAR SAL�RIO M�NIMO*\n\n");
	printf("Por favor, coloque o seu sal�rio: ");
	scanf("%f", &srioUser);
	qntSalarios = (srioUser / srioMin);
	printf("Voc� recebe %0.1f sal�rios m�nimos.", qntSalarios);
	return 0;
}
