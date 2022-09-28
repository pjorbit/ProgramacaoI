#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int numeroUser, numeroLoop;

    printf("Por favor, entre com um numero inteiro: \n");
    scanf("%d", &numeroUser);
    printf("Numeros decrescentes entre %d e 0 \n", numeroUser);
    for(numeroLoop = numeroUser; numeroLoop >= 0; numeroLoop--) {
        printf("%d \n", numeroLoop);
    }

    return 0;
}