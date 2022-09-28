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

    int nums[10], i, length;

    printf("Por favor, entre com seus 10 numeros separadamente!\n\n");
    for (i = 1; i < 10; i++) {
        printf("Entre com um numero: ");
        scanf("%d", &nums[i]);
    }

    for (i = 1; i <= nums[i]; i++) {
        if(i % 2 == 0) {
            printf("o numero %d e par \n", nums[i]);
        }
        
    }


    return 0;
}