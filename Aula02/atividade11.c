#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");

	int num, numDobro;
	printf("*O DOBRO DO INTEIRO*\n\n");
	printf("Por favor, coloque um n�mero inteiro: ");
	scanf("%d", &num);
	numDobro = (num * 2);
	if(numDobro % 2 == 0 && numDobro > 0) {
		printf("O dobro do seu n�mero �: %d", numDobro);
	} else {
		printf("Por favor, entre com um n�mero INTEIRO!");
	}
	return 0;
}
