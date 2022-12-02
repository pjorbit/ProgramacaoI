#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>

/*Crie um programa em C que peça 10 números, armazene eles em um
vetor e diga qual elemento é o maior, qual é o menor e que seus valores.*/

int main() {
    setlocale(LC_ALL, "Portuguese");

    int vetorA[10], valorMaior=0, valorMenor=0;


    srand(time(NULL));

    for (int i = 0; i <= 10; i++) {
        vetorA[i] = rand() % 10;
    }

    for (int i = 0; i <= 10; i++) {
        if (vetorA[i] > valorMaior) {
            valorMaior = vetorA[i];
        }
        if (vetorA[i]<valorMenor) {
            valorMenor=vetorA[i];
        }
    }

    printf("Valor maior: %d\n", valorMaior);
    printf("Valor menor: %d\n", valorMenor);
    printf("VetorA: ");
    for (int i = 0; i < 10; i++) {
        printf("%2d", vetorA[i]);
    }
    
    return 0;
}