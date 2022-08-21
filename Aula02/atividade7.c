#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int hora, minutos;
	
	printf("*MINUTOS DO DIA*\n\n");
	printf("Por favor, digite a hora: ");
	scanf("%d", &hora);
	minutos = (hora * 60);
	printf("Desde o início do dia, se passaram %d minutos.", minutos);
}
