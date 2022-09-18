/*Dado as medidas dos 3 lados de um triângulo, elabore um programa
que imprima qual é o tipo do triângulo.*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float lado1, lado2, base;

    printf("Por favor entre com as informações do seu triângulo: \n");
    printf("O primeiro lado: ");
    scanf("%f", &lado1);
    printf("O segundo lado: ");
    scanf("%f", &lado2);
    printf("Agora entre com a base: ");
    scanf("%f0", &base);

    if(lado1 && lado2 == base) {
        printf("Esse triângulo é Equilátero!");
    } else if(lado1 == lado2 && lado1 && lado2 != base) {
        printf("Esse triângulo é Isósceles!");
    } else if(lado1 != lado2 && lado1 != base && lado2!=base) {
        printf("Esse triângulo é Escaleno!");
    } else {
        printf("Dados inválidos");
    }

    return 0;
}