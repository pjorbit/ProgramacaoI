#include <stdio.h>
#include <locale.h>

/*Escreva um programa que leia o número de alunos e o de alunas de uma
sala. Como saída, o programa deve apresentar primeiro quem estiver em maior
quantidade. Por exemplo, se na sala tiver mais alunos, apresente primeiro o
número de alunos, caso contrário apresente o número de alunas e depois o de
alunos. Considere o caso em que o número de alunos é igual ao número de
alunas.*/

int main() {
    setlocale(LC_ALL, "Portuguese");

    int alunos, alunas;

    printf("Por favor, entre com o numero de alunos: \n");
    scanf("%d", &alunos);
    printf("Por favor, entre com o numero de alunas: \n");
    scanf("%d", &alunas);
    if(alunos > alunas) {
        printf("O numero de alunos(%d) e maior que o de alunas(%d).", alunos, alunas);
    } else if(alunas > alunos) {
        printf("O numero de alunas(%d) e maior que o de alunos(%d).", alunas, alunos);
    } else {
        printf("O numero de alunos e alunas e identico!!");
    }

    return 0;
}