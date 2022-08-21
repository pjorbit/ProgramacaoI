#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
	
maiuscula(char nome[], char nomeUp[]) {
	int i = 0;
	while(nome[i] != '\0') {
		nomeUp[i] = toupper(nome[i]);
		i++;
	}
	nomeUp[i] = '\0';
}

minuscula(char nome[], char nomeUp[]) {
	int i = 0;
	while(nome[i] != '\0') {
		nomeUp[i] = tolower[nome[i]];
		i++;
	}
	nomeUp[i] = '\0';
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	char nomeUser[30];
	char stringUP[30];
	char stringDown[30];
	int idade;
	printf("Por favor, entre com seu nome e em seguida sua idade: \n");
	scanf("%s", nomeUser);
	scanf("%d", &idade);
	maiuscula(nomeUser, stringUP);
	printf("Seu nome em letras maiúsculas ficaria assim: %s", stringUp);
	minuscula(nomeUser, stringDown);
	printf("Seu nome em letras minusculas ficaria assim: \s", stringDown);

	return 0;
}
