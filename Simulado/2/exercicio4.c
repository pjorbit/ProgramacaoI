#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>

/*Implementar um programa em C para ler dois números inteiros e
imprimir uma mensagem indicando se os números lidos são iguais ou
diferentes. Caso sejam diferentes, computar a média dos mesmos.*/

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num1, num2, media;

    printf("Entre com o primeiro numero: ");
    scanf("%d", &num1);
    printf("Entre com o segundo numero: ");
    scanf("%d", &num2);

    if (num1==num2) {
        printf("Seus numeros sao iguais!");
    } else {
        media = (num1 + num2) /2;
        printf("A media dos numeros: %d", media);
    }
    

    return 0;
}