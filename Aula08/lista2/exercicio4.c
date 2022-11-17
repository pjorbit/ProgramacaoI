#include <stdio.h>
#include <locale.h>

/*Solicite ao usuário a altura e o sexo (M- Masculino ou F-
Feminino). Deve encerrar o programa quanto for digitado zero (0).

Fazer um programa que calcule e escreva:
• A média de altura das mulheres;
• O número de homens;
• O número de mulheres;*/

int main() {
    setlocale(LC_ALL, "Portuguese");

    char opcaoUser;
    int masculino=0, feminino=0;
    float alturaMasculino=0, alturaFeminino=0, alturaFemininoTotal=0, mediaAltura=0;

    printf("Por favor, escolha uma das opcoes!\n");
    printf("M - Masculino \nF - Feminino \nS - Sair \n");
    scanf(" %c", &opcaoUser);
    while (opcaoUser!='S') {
        if (opcaoUser=='M') {
            masculino = masculino + 1;
            printf("Entre com sua altura:", alturaMasculino);
            scanf("%f", &alturaMasculino);
        } else if (opcaoUser=='F') {
            feminino = feminino + 1;
            printf("Entre com sua altura:", alturaFeminino);
            scanf("%f", &alturaFeminino);
            alturaFemininoTotal=alturaFemininoTotal + alturaFeminino;
        }
        printf("Por favor, escolha uma das opcoes!\n");
        printf("M - Masculino \nF - Feminino \nS - Sair \n");
        scanf(" %c", &opcaoUser);
    }
    mediaAltura = (alturaFemininoTotal / feminino);
    printf("A media de altura das mulheres foi de: %.2f \n", mediaAltura);
    printf("O total de homens foi de: %d \n", masculino);
    printf("O total de mulheres foi de: %d \n", feminino);


    return 0;
}