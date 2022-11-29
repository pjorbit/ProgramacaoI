#include <stdio.h>
#include <string.h>
#include <locale.h>

/*Elabore um algoritmo que construa um vetor de 50 elementos, tal que o valor de
cada elemento seja o dobro do índice de sua posição no vetor.*/

int main() {
    setlocale(LC_ALL, "Portuguese");

    int vetorA[50];

    for (int i = 0; i < 50; i++) {
        vetorA[i] = i*i;
    }
    
    printf("\nVetorA: ");
    for (int i = 0; i < 50; i++) {
        printf("vetor[%d]=%d\n", i, vetorA[i]);
    }

    return 0;
}