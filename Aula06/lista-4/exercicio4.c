#include <stdio.h>
#include <locale.h>

/*Elabore um algoritmo que leia um número. Se o número for positivo
armazene-o em A, se for negativo, em B. No final mostrar o resultado.*/

int main() {
    setlocale(LC_ALL, "Portuguese");

    int numUser;

    printf("Entre com um número inteiro: \n");
    scanf("%d", &numUser);
    if(numUser > 0 && numUser != 0) {
        printf("O número %d é positivo!", numUser);
    } else if(numUser < 0 && numUser != 0) {
        printf("O número %d é negativo!", numUser);
    } else {
        printf("Seu número não é positivo e nem negativo, é um número zero!");
    }

    return 0;
}