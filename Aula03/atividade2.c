#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");

	char nome[30], vogal[5], consoante[5];

	printf("Por favor, entre com seu nome: \n");
	scanf("%s", nome);
	printf("Por favor, entre com uma VOGAL: \n");
	scanf("%s", vogal);
	scanf("%s", consoante);
	printf("%s \n", nome);
	printf("Sua vogal é: %s \n", vogal);
	printf("Sua consoante é: %s", consoante);

	return 0;
}
