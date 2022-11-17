#include <stdio.h>
#include <locale.h>

/*Faça um programa que leia 10 valores inteiros e:
Calcule e mostre a média dos números lidos*/

int main() {
    setlocale(LC_ALL, "Portuguese");

    int i, nuns[10];
    float soma, media;

    printf("Entre com seus 10 numeros separadamente! \n");
    for (i = 0; i <= 10; i++){
        printf("Entre com seu numero: \n");
        scanf("%d", &nuns[i]);
        soma=soma+nuns[i];
    }
    media = soma / 10;
    printf("Sua media foi: %.2f", media);

}