#include <stdio.h>
#include <locale.h>

/*Codifique uma função denominada parOuImpar() que receba como
parâmetro um valor inteiro, que deve ser identificado como par ou ímpar. A
função deve retornar se o valor digitado é par ou impar:*/

void par_impar(int valor);

int main() {
    setlocale(LC_ALL, "Portuguese");

    int numUser;

    printf("Entre com um numero: ");
    scanf("%d", &numUser);
    par_impar(numUser);
    return 0;
}

void par_impar(int valor) {
    int res = valor % 2;
    if(res == 0) {
        printf("Par");
    } else {
        printf("Impar");
    }
    return res;
}