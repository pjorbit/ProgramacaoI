#include <locale.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>


void maiuscula(char string1[], char string2[]);
void minuscula(char string1[], char string2[]);

int main() {
	setlocale(LC_ALL, "Portuguese");

	int idade;
	char nome[30];
	char nomeUpr[30];
	char nomeLwr[30];

	printf("Entre com o seu nome: \n");
	scanf("%s", nome);
	printf("Entre com a sua idade \n");
	scanf("%d", &idade);
	printf("O usuário %s tem %d anos.\n", nome, idade);
	printf("Seu nome tem %d letras. \n", strlen(nome));
	maiuscula(nome, nomeUpr);
	printf("Seu nome maiusculo fica: %s \n", nomeUpr);
	minuscula(nome, nomeLwr);
	printf("Seu nome em minusculo fica: %s \n", nomeLwr);

	return 0;
}

void maiuscula(char string1[], char string2[]) {
	int i = 0;
	while(string1[i] != '\0') {
		string2[i] = toupper(string1[i]);
		i++;
	}
	string2[i] = '\0';
}

void minuscula(char string1[], char string2[]) {
	int i = 0;
	while(string1[i] != '\0') {
		string2[i] = tolower(string1[i]);
		i++;
	}
	string2[i] = '\0';
}