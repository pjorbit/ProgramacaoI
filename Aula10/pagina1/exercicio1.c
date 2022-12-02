#include <stdio.h>
#include <locale.h>

/*Construa um algoritmo que leia um vetor de n posições de inteiros e determine
qual o maior e o menor valor existente neste vetor.*/

int main() {
    setlocale(LC_ALL, "Portuguese");

    int tamanhoVetor, vetor[10], valorMaior=0, valorMenor=0;
    
    printf("Quantas posicoes tera seu vetor?");
    scanf("%d", &tamanhoVetor);

    for (int i = 0; i < tamanhoVetor; i++) {
        printf("Entre com um numero: \n");
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < tamanhoVetor; i++) {
        if(vetor[i] >= valorMaior) {
            valorMaior = vetor[i];
            if (valorMenor==0) {
                valorMenor = vetor[i];
            }
        }
        if (vetor[i]<=valorMenor) {
            valorMenor = vetor[i];
        }
    }
    printf("Seu maior numero: %d \n", valorMaior);
    printf("Seu menor numero: %d \n", valorMenor);
    
    return 0;
}