#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>

/*Crie um programa em C que peça 20 números, armazene eles em um
vetor e diga qual elemento é o par, qual é o impar e que seus valores.*/

int main() {
    setlocale(LC_ALL, "Portuguese");

    int vetorA[20];

    srand(time(NULL));

    for (int i = 0; i < 20; i++) {
        vetorA[i] = rand() % 20;
        if (vetorA[i]%2==0) {
            printf("par: %d   ", vetorA[i]);
        } else {
            printf("impar: %d  ", vetorA[i]);
        }
    }

    printf("\nvetor: ");
    for (int i = 0; i < 20; i++) {
        printf("%3d", vetorA[i]);
    }



    return 0;
}