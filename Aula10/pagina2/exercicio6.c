#include <stdio.h>
#include <time.h>
#include <locale.h>

/*6--Faça um programa que preencha um vetor de 8 posições do tipo
inteiro. Com o valor do rand()%10. Imprimir o conteúdo do vetor de todas
as posições.*/

int main() {
    setlocale(LC_ALL, "Portuguese");

    int vetorA[8];

    srand(time(NULL));

    for (int i = 0; i < 8; i++) {
        vetorA[i] = rand() % 10;
    }

    printf("\nVetor: ");
    for (int i = 0; i < 8; i++) {
        printf("%3d", vetorA[i]);
    }
    
    return 0;
}