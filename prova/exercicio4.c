#include <stdio.h>
#include <locale.h>

/*Codifique um programa em C que solicite ao usuário dois valores inteiros.
Após o recebimento calcule a potência do primeiro valor elevado ao segundo (x
y )*/

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num1;

    printf("Por favor, entre com um numero: ");
    scanf("%d", &num1);
    if(num1>=10){
        printf("Seu numero e maior ou igual a 10!");
    } else {
        printf("Seu numero e menor que 10!");
    }

    return 0;
}