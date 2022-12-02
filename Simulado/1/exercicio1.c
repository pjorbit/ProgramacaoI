#include <stdio.h>
#include <locale.h>

/*Faça um programa que receba dois números e mostre qual deles e o
maior. Utilize if e else.*/

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num1, num2;

    printf("Entre com o primeiro numero: \n");
    scanf("%d", &num1);
    printf("Entre com o segundo numero: \n");
    scanf("%d", &num2);
    if (num1>num2) {
        printf("Seu numero %d e maior que %d", num1, num2);
    } else if(num2>num1) {
        printf("Seu numero %d e maior que %d", num2, num1);
    } else {
        printf("Seus numeros sao iguais");
    }

    return 0;
}