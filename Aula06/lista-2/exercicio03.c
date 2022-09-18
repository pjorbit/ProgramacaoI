/*Faça um programa que solicita a idade de uma pessoa e verifica se ela
pode votar (idade>=16).*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int idade;

    printf("Por favor, digite sua idade: \n");
    scanf("%d", &idade);
    if(idade>=16){
        printf("Você pode votar!");
    } else {
        printf("Você não pode votar!");
    }

    return 0;
}