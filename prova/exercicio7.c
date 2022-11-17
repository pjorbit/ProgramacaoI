#include <stdio.h>
#include <locale.h>

/*1-Codifique um programa em C que solicite ao usuário um valor inteiro e
apresente todos os números existentes entre o valor digitado e 100.*/

int main() {
    setlocale(LC_ALL, "Portuguese");

    int numUser;

    printf("Por favor, entre com um numero: ");
    scanf("%d", &numUser);
    for (int i = numUser; i <= 100; i++) {
        if (numUser<100) {
            printf("Valores entre %d e 100: %d \n", numUser, i);
        }
    }
    if (numUser>100) {
        printf("Esse numero e maior que 100");
    }

    return 0;
}