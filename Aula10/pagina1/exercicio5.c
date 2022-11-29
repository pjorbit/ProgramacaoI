#include <stdio.h>
#include <string.h>
#include <locale.h>

/*Escreva um algoritmo que receba 10 números pelo teclado, armazene esses
números em um vetor. Em seguida, o programa inverte os elementos do vetor,
gerando um novo vetor com os elementos invertidos. O programa imprime o vetor
original e o vetor invertido e os mostre em ordem inversa.*/

int main() {
    setlocale(LC_ALL, "Portuguese");

    int vetorA[10], i;

    printf("Entre com 10 numeros: \n");
    for (i = 0; i < 10; i++) {
        printf("Digite um numero: \n", i+1);
        scanf("%d", &vetorA[i]);
    }
    
    for (i = 10 - 1; i > 0; i--) {
        printf("%d \n", vetorA[i]);
    }

    return 0;
}