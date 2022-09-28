#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int numeroUser, numeroLoop;

    printf("Por favor, entre com um numero inteiro: \n");
    scanf("%d", &numeroUser);
    printf("Numeros crescentes entre 0 e %d \n", numeroUser);
    for(numeroLoop = 0; numeroLoop <= numeroUser; numeroLoop++) {
        printf("%d \n", numeroLoop);
    }

    return 0;
}