#include <stdio.h>
#include <locale.h>
#include <math.h>

/*Codifique um programa em C que solicite ao usuário dois valores inteiros.
Após o recebimento calcule a potência do primeiro valor elevado ao segundo (x
y )*/

int main() {
    setlocale(LC_ALL, "Portuguese");

	int num1, num2, resul;
	
	printf("Por favor, digite o primeiro valor: ");
	scanf("%d", &num1);
	printf("Digire o segundo valor: ");
	scanf("%d", &num2);
	resul = pow(num1, num2);
	printf("A potencia encontrada foi de: %d", resul);

    return 0;
}