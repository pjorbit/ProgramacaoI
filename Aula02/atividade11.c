#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");

	int num, numDobro;
	printf("*O DOBRO DO INTEIRO*\n\n");
	printf("Por favor, coloque um número inteiro: ");
	scanf("%d", &num);
	numDobro = (num * 2);
	if(numDobro % 2 == 0 && numDobro > 0) {
		printf("O dobro do seu número é: %d", numDobro);
	} else {
		printf("Por favor, entre com um número INTEIRO!");
	}
	return 0;
}
