#include <stdio.h>
#include <locale.h>

/*Construir um programa que terá uma função chamada soma:
Nome da função: soma
Recebe como parâmetros dois valores inteiro(num1, num2);
Objetivo: Efetuar as soma dos dois valores
Retorno: Um parâmetro inteiro conteúdo o resultado da soma.*/

int soma(int a, int b);

int main() {
    setlocale(LC_ALL, "Portuguese");

    int valorA, valorB, resultado;

    printf("Entre com o primeiro numero: ");
    scanf("%d", &valorA);
    printf("Entre com o segundo numero: ");
    scanf("%d", &valorB);

    resultado = soma(valorA, valorB);
    printf("Seu resultado foi: %d", resultado);

    return 0;
}

int soma(int a, int b){
    int res;
    res = a + b;
    return res;
}