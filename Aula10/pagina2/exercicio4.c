#include <stdio.h>
#include <string.h>
#include <locale.h>

/*4-Fazer um programa que declara o vetor "numeros", do tipo "int" e
tamanho "10", Solicite uma valor inteiro e coloca na 4 posição e outro
valor da 6 posição. Imprima o conteúdo da 4 posição e 6 posição.*/

int main() {
    setlocale(LC_ALL, "Portuguese");

    int numeros[10];

    printf("Entre com o numero da 4 posicao: ");
    scanf("%s", &numeros[4]);
    printf("Entre com o numero da 6 posicao: ");
    scanf("%s", &numeros[6]);

    printf("posicao 4: %c \n", numeros[4]);
    printf("posicao 6: %c \n", numeros[6]);

    return 0;
}