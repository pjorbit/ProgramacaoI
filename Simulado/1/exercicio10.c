#include <stdio.h>
#include <locale.h>

/*10. Faça um programa que solicite ao usuário para digitar 10 valores e
some-os. Este programa deve utilizar o for.*/

int main() {
    setlocale(LC_ALL, "Portuguese");

    int numUser = 0, resultado = 0;

    for (int i=1; i<=10; i++) {
        printf("Por favor, entre com seu %dº numero: \n", i);
        scanf(" %d", &numUser);
        resultado = resultado + numUser;
    }
    printf("A soma de todos os numeros foi: %d", resultado);

    return 0;
}

