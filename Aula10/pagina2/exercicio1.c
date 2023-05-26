#include <stdio.h>
#include <string.h>
#include <locale.h>

/*Codifique um programa em C que solicite ao usuário o nome de um país.
Armazene o nome digitado num vetor e exiba o seu conteúdo. Veja o
exemplo a seguir:*/

int main() {
    setlocale(LC_ALL, "Portuguese");

    char nomePais[50];

<<<<<<< HEAD
    printf("Nome pais: ");
    gets(nomePais);
=======
    printf("Entre com o nome de um país. \n")
    for (int i = 0; i < count; i++)
    {
        scanf()
    }
>>>>>>> a1ca04a0a2274c177e002013fe8731bf488772f5
    
    printf("Conteudo: %s", nomePais);

    return 0;
}