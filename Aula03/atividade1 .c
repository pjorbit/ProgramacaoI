#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	char nome[30];
	int idade;
	float nota1, nota2, nota3, media;
	
	printf("Por favor, coloque seu nome e em seguida sua idade: \n");
	scanf("%s", nome);
	scanf("%d", &idade);
	printf("Por favor, coloque suas três notas: \n");
	scanf("%f", &nota1);
	scanf("%f", &nota2);
	scanf("%f", &nota3);
	media = ((nota1 + nota2 + nota3) / 3);
	printf("%s, tem %d de idade e sua média ficou %0.1f.", nome, idade, media);
	return 0;
}
