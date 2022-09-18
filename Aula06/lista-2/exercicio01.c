/*Faça um programa que leia um número e escreva na tela se o número é
menor, igual ou maior que zero*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int numUser;

    printf("Por favor, entre com um número: \n");
    scanf("%d", &numUser);
    if(numUser < 0) {
        printf("O número %d é menor que 0!", numUser);
    } else if(numUser > 0) {
        printf("O número %d é maior que 0!", numUser);
    } else {
        printf("Seu número é zero!");
    }

    return 0;
}