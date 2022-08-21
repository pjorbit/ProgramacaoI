#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	float nota1, nota2, nota3, media;
	
	printf("*CALCULAR A MÉDIA*\n\n");
	printf("Por favor, digite sua primeira nota: ");
	scanf("%f", &nota1);
	printf("Por favor, digite sua segunda nota: ");
	scanf("%f", &nota2);
	printf("Por favor, digite sua terceira nota: ");
	scanf("%f", &nota3);
	media = ((nota1 + nota2 + nota3) / 3);
	printf("Sua média foi: %0.1f", media);
	return 0;
}
