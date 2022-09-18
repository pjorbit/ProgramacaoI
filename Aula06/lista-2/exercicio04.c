/*Faça um programa que solicita a idade de uma pessoa e verifica se ela
pode dirigir (idade>=18).*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int idade;

    printf("Por favor, digite sua idade: \n");
    scanf("%d", &idade);
    if(idade>=18){
        printf("Você pode digirir!");
    } else {
        printf("Você não pode digirir!");
    }

    return 0;
}