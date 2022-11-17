#include <stdio.h>
#include <locale.h>

/*Elabore um algoritmo que inicialize um vetor de 50 posições de inteiros (os
valores devem ser lidos através do teclado) e, em seguida, calcule e imprima a soma
desses elementos.*/

int main() {
    setlocale(LC_ALL, "Portuguese");

    int vetorTeste[11], soma=0;

    for (int i = 0; i <= 10; i++) {
        printf("Entre com um numero: \n");
        scanf("%d", &vetorTeste[i]);
        soma = soma + vetorTeste[i];
    }

    printf("A soma dos numeros foi: %d", soma);
    
    return 0;
}