/*Faça um programa que leia dois números e apresente na tela o maior
deles. A mensagem deve ser: “Maior número entrado: ”, onde em deve
aparecer o maior número entrado.*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num1, num2;

    printf("Por favor, entre com o primeiro número: \n");
    scanf("%d", &num1);
    printf("Por favor, entre com o segundo número: \n");
    scanf("%d", &num2);
    if(num1 > num2) {
        printf("Seu número %d é maior que seu número %d!", num1, num2);
    } else if(num2 > num1) {
        printf("Seu número %d é maior que seu número %d!", num2, num1);
    } else {
        printf("Seus números são iguais!");
    }

    return 0;
}