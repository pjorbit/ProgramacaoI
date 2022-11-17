#include <stdio.h>
#include <locale.h>

/*Faça um algoritmo que mostre a tabuada do número 5. (considerar
tabuada do número 1 ao 10).*/

int main() {
    setlocale(LC_ALL, "Portuguese");

    int i, tabuada;

    printf("Tabuada do 5!  \n");

    for(i=0;i<=50;i+=5) {
        printf("%d \n", i);
    }


    return 0;
}