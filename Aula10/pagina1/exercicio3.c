#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <time.h>

/*Construa um algoritmo que leia dois vetores A e B e gere um terceiro vetor C,
formado pela soma dos dois outros (A e B).*/

int main() {
    setlocale(LC_ALL, "Portuguese");

    int vetorA[5];
    int vetorB[5];
    int vetorC[5];

    srand(time(NULL));

    for (int i = 0; i < 5; i++) {
        vetorA[i] = rand() % 10;
        vetorB[i] = rand() % 10;
    }
    
    for (int i = 0; i < 5; i++) {
        vetorC[i] = vetorA[i] + vetorB[i];
    }
    
    printf("\nVetorA: ");
    for (int i = 0; i < 5; i++) {
        printf("%3d", vetorA[i]);
    }

    printf("\nVetorB: ");
    for (int i = 0; i < 5; i++) {
        printf("%3d", vetorB[i]);
    }

    printf("\nVetorC: ");
    for (int i = 0; i < 5; i++) {
        printf("%3d", vetorC[i]);
    }
    
    return 0;
}