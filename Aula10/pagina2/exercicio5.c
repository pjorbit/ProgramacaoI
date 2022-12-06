#include <stdio.h>
#include <time.h>
#include <locale.h>

/*5-Faça um programa que preencha um vetor de 20 posições do tipo
inteiro. Com o valor do índice *2; Imprimir o conteúdo do vetor de todas
as posições.*/

int main() {
    setlocale(LC_ALL, "Portuguese");

    int vetorA[20];

    for (int i = 0; i < 20; i++) {
        vetorA[i] = i * 2;
    }

    printf("\nvetor: ");
    for (int i = 0; i < 20; i++) {
        printf("%3d", vetorA[i]);
    }
    
    return 0;
}