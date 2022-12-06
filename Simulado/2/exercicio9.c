#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>

/*Codifique um programa em C que preencha um vetor inteiro de 20
posições com valores aleatórios entre 0 - 100, apresentando as suas
posições e o conteúdo para cada uma delas inversa.*/

void opcaoPagamento();

int main() {
    setlocale(LC_ALL, "Portuguese");

    int vetorA[20];

    srand(time(NULL));

    for (int i = 0; i < 20; i++) {
        vetorA[i] = rand() % 100;
    }

    printf("\nVetor:");
    for (int i = 0; i < 20; i++) {
        printf("%3d", vetorA[i]);
    }

    return 0;
}