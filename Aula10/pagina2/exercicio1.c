#include <stdio.h>
#include <string.h>
#include <locale.h>

/*Codifique um programa em C que solicite ao usuário o nome de um país.
Armazene o nome digitado num vetor e exiba o seu conteúdo. Veja o
exemplo a seguir:*/

int main() {
    setlocale(LC_ALL, "Portuguese");

    char nomePais[50];

    printf("Nome pais: ");
    gets(nomePais);
    
    printf("Conteudo: %s", nomePais);

    return 0;
}