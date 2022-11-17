#include <stdio.h>
#include <locale.h>

/*Codifique um programa em C que solicite ao usuário uma temperatura dada
na escala Celsius, armazenando o valor numa variável. Logo após o
recebimento, converta essa temperatura para a escala Fahrenheit e apresente
o resultado.

Fórmula: F = (C * 1.8) + 32 */

int main() {
    setlocale(LC_ALL, "Portuguese");

    float fahrenheit, celcius;

    printf("Por favor, entre com a temperatura em Celsius: ");
    scanf("%f", &celcius);
    fahrenheit = (celcius * 1.8) + 32;
    printf("Sua temperatura convertida para Fahrenheit e de: %.1f", fahrenheit);

    return 0;
}