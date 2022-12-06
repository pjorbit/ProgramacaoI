#include <stdio.h>
#include <locale.h>

/*Contruir um programa que terá uma função chamada multiplica:
Nome da função: multiplica
Recebe como parâmetos dois valores inteiros (N1,N2)
Objetivo: multiplicar os valores recebidos nos parâmetros.
Retorno: um parâmetro inteiro (res) contendo o resultado*/

int multiplica(int a, int b);

int main() {
    setlocale(LC_ALL, "Portuguese");

    int valorA, valorB, resultado;

    printf("Entre com o primeiro numero: ");
    scanf("%d", &valorA);
    printf("Entre com o segundo numero: ");
    scanf("%d", &valorB);

    resultado = multiplica(valorA, valorB);
    printf("Seu resultado foi: %d", resultado);

    return 0;
}

int multiplica(int a, int b){
    int res;
    res = a * b;
    return res;
}