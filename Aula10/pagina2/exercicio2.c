#include <stdio.h>
#include <string.h>
#include <locale.h>

/*Solicite o Mês e o nome do usuário, receba e imprima na tela:*/

int main() {
    setlocale(LC_ALL, "Portuguese");

    char mes[15], nomeUser[30];

    printf("Entre com seu mes: ");
    gets(mes);
    printf("Entre com seu nome: ");
    gets(nomeUser);

    printf("O mes digitado foi: %s \n", mes);
    printf("O nome digitado foi: %s", nomeUser);


    return 0;
}