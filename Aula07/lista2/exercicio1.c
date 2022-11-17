#include <stdio.h>
#include <string.h>
#include <locale.h>

/*Escreva um programa que leia 10 números e informe:
A)Quantidade de números digitados maiores ou igual a 0.
B)Quantidade de números digitados menores que 0.
C)Soma de todos os números digitados maiores que zero.
D)Soma dos números digitados menores que zero.*/


int main() {
    setlocale(LC_ALL, "Portuguese");

    int i, nun, maiorZero=0, menorZero=0, somaMaior=0, somaMenor=0;

    printf("Por favor, entre com seus 10 numeros separadamente!\n\n");
    for (i = 1; i <= 10; i++) {
        printf("Entre com um numero: ");
        scanf("%d", &nun);
        if(nun>=0) {
            maiorZero = maiorZero + 1;
            somaMaior = somaMaior + nun;
        } else if (nun<=0) {
            menorZero = menorZero + 1;
            somaMenor = somaMenor + nun;
        }
    }

    printf("Quantidade de numeros digitados maiores ou iguais a 0 : %d. \n", maiorZero);
    printf("Quantidade de numeros digitados menores ou iguais a 0 : %d. \n", menorZero);
    printf("Soma dos numeros digitados maiores ou iguais a 0 : %d. \n", somaMaior);
    printf("Soma dos numeros digitados menores ou iguais a 0 : %d. \n", somaMenor);


    return 0;
}