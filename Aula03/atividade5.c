#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	double largura, comprimento, metrosQdd, lampada, qtdLampadas, potenciaNec;

	printf("Entre com a largura e o comprimento da sua casa: \n");
	scanf("%lf", &largura);
	scanf("%lf", &comprimento);
	printf("Qual a potência da sua lâmpada? ");
	scanf("%lf", &lampada);
	metrosQdd = (comprimento * largura);
	potenciaNec = (metrosQdd * 18);
	qtdLampadas = (potenciaNec / metrosQdd);
	printf("Serão necessárias %0.0lf lâmpadas para iluminar sua casa.", qtdLampadas);
	return 0;
}



/*Escreva um programa para calcular e imprimir o número de lâmpadas
necessárias para iluminar um determinado cômodo de uma residência.
Dados de entrada: a potência da lâmpada utilizada (em watts), as
dimensões (largura e comprimento, em metros) do cômodo. Considere
que a potência necessária é de 18 watts por metro quadrado.*/