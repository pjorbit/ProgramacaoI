#include <stdio.h>
#include <locale.h>

/*Faça um programa que solicite ao usuário os seguintes itens abaixo:
Idade:
Salario:
Profissão:
Depois imprima o resultado.*/

int main() {
    setlocale(LC_ALL, "Portuguese");

    int idade;
    float salario;
    char profissao[30];

    printf("Entre com sua idade: \n");
    scanf("%d", &idade);
    printf("Entre com seu salario: \n");
    scanf("%f", &salario);
    printf("Entre com sua profissao: \n");
    scanf("%s", profissao);

    printf("O usuario cuja profissao e %s, de idade igual a %d possui um salario de: %f", profissao, idade, salario);

    return 0;
}