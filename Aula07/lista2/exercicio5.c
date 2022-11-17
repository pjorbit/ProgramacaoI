#include <stdio.h>
#include <string.h>
#include <locale.h>

/*Faça um algoritmo que mostre a tabuada de qualquer número escolhido
pelo usuário (considerar tabuada do número 1 ao 10).*/

int main() {
    setlocale(LC_ALL, "Portuguese");

    int numUser=0, numTabuada=0;

    printf("TABUADA \n");
    printf("Por favor entre com um numero: \n");
    scanf("%d", &numUser);
    for (int i=0; i<=10; i++) {
        numTabuada = numUser * i;
        printf("%d X %d = %d! \n", numUser, i, numTabuada);
    }
    
    return 0;
}