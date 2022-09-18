/*Faça um programa que dada a idade de uma pessoa, retorna uma das
seguintes mensagens: “Não pode nem votar e nem dirigir”, “Pode votar,
mas não pode dirigir”, “Pode votar e pode dirigir”.*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int idade;

    printf("Por favor, digite sua idade: \n");
    scanf("%d", &idade);
    if(idade>=18 && idade>= 16){
        printf("Você pode votar e dirigir!");
    } else if(idade>=18 && idade<16) {
        printf("Você pode votar mas não dirigir");
    } else if(idade<18 && idade>16) {
        printf("Você pode dirigir mas não pode votar");
    } else {
        printf("Não pode votar e nem dirigir!");
    }

    return 0;
}