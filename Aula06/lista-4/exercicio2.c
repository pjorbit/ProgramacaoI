#include <stdio.h>
#include <locale.h>

/*2)Fazer um programa que receba um valor inteiro e depois incremente 1, e
depois decremente 1. Imprimir os 3 valores.*/

int main() {
    setlocale(LC_ALL, "Portuguese");

    int valorUser, valorIncremento, valorDecremento;

    printf("Por favor, entre com um valor inteiro: ");
    scanf("%d", &valorUser);
    printf("Seu valor foi: %d. \n", valorUser);
    valorIncremento = valorUser + 1;
    printf("Seu valor incrementado foi de: %d. \n", valorIncremento);
    valorDecremento = valorUser - 1;
    printf("Seu valor decrementado foi de: %d.", valorDecremento);

    return 0;
}