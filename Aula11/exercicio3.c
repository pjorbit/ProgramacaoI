#include <stdio.h>
#include <locale.h>

/*Construir um programa que chame uma função chamada mensagem:
Nome da função: mensagem
Recebe: a frase : OLA EU ESTOU VIVO!!!
Objetivo: Chamar a função imprimindo na tela a frase.
Retorno: void*/

char mensagem(char mensagem[50]);

int main() {
    setlocale(LC_ALL, "Portuguese");

    char mensagemUser[50];

    printf("Entre com sua mensagem: ");
    gets(mensagemUser);

    mensagem(mensagemUser);

    return 0;
}

char mensagem(char mensagem[50]) {
    return printf("%s", mensagem);
}