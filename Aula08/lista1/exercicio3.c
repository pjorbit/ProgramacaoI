#include <stdio.h>
#include <locale.h>

/*Faça um programa que, para um número indeterminado de pessoas: 
leia a idade de cada uma, sendo que a idade 0 (zero) indica o fim da leitura e não deve ser considerada. 
A seguir calcule:
O número de pessoas;
A idade média do grupo;
A menor idade e a maior idade*/

int main() {
    setlocale(LC_ALL, "Portuguese");

    int idade=0, soma=0, qntd=0, idadeMenor=0, idadeMaior=0;
    float media;

    printf("Por favor, entre com a idade: \n");
    scanf("%d", &idade);
    while (idade!=0) {
        qntd = qntd + 1;
        soma = soma + idade;
        if (idade!=0) {
            if (idade>idadeMaior) {
                idadeMaior = idade;
                if (idadeMenor == 0) {
                    idadeMenor = idade;
                }
            } else if (idade<idadeMenor) {
                idadeMenor = idade;
            }   
        }
        printf("Digite a proxima idade: \n");
        scanf("%d", &idade);
    }
    media=soma/qntd;
    printf("A idade media e: %.2f \n", media);
    printf("A maior idade: %d \n", idadeMaior);
    printf("A menor idade: %d \n", idadeMenor);
    printf("A quantidade de pessoas: %d \n", qntd);

    return 0;
}
