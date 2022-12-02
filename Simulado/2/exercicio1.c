#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

/*Fazer um programa que pergunte ao usuário:
Quantas calorias ele consumiu:
Qual Atividade física de sua preferência de acordo com o menu que
você vai indicar 1-CORRIDA, 2-PEDALAR, 3-NADAR, 4-STEP e etc...
Devolva ao usuário o tempo que ele vai precisar fazer exercício para
gastar as calorias.*/

int main() {
    setlocale(LC_ALL, "Portuguese");

    int caloriasUser, caloriasResultado, opcaoUser, tempo;

    printf("Quantas calorias deseja eliminar?");
    scanf("%d", &caloriasUser);

    printf("Qual atividade fisica deseja fazer?\n");
	printf("1 - Corrida\n");
	printf("2 - Pedalar\n");
	printf("3 - Nadar\n");
	printf("4 - Step\n");
	printf("5 - Pular Corda\n");
	printf("6 - Eliptico\n");
    printf("7 - Andar de Patins\n");
	printf("8 - Dancar\n");
    scanf("%d", &opcaoUser);

    switch (opcaoUser) {
    case 1:
        printf("Voce escolheu corrida!\n");
        tempo = 545 / 60;
        caloriasResultado = caloriasUser / tempo;
        printf("Voce precisa correr por: %d minutos", caloriasResultado);
        break;

    case 2:
        printf("Voce escolheu corrida!\n");
        tempo = 472 / 60;
        caloriasResultado = caloriasUser / tempo;
        printf("Voce precisa pedalar por: %d minutos", caloriasResultado);
        break;

    case 3:
        printf("Voce escolheu corrida!\n");
        tempo = 472 / 60;
        caloriasResultado = caloriasUser / tempo;
        printf("Voce precisa nadar por: %d minutos", caloriasResultado);
        break;

    case 4:
        printf("Voce escolheu corrida!\n");
        tempo = 499 / 60;
        caloriasResultado = caloriasUser / tempo;
        printf("Voce precisa fazer step por: %d minutos", caloriasResultado);
        break;

    case 5:
        printf("Voce escolheu corrida!\n");
        tempo = 570 / 60;
        caloriasResultado = caloriasUser / tempo;
        printf("Voce precisa pular corda por: %d minutos", caloriasResultado);
        break;

    case 6:
        printf("Voce escolheu corrida!\n");
        tempo = 519 / 60;
        caloriasResultado = caloriasUser / tempo;
        printf("Voce precisa fazer eliptico por: %d minutos", caloriasResultado);
        break;

    case 7:
        printf("Voce escolheu corrida!\n");
        tempo = 501 / 60;
        caloriasResultado = caloriasUser / tempo;
        printf("Voce precisa andar de patins por: %d minutos", caloriasResultado);
        break;

    case 8:
        printf("Voce escolheu corrida!\n");
        tempo = 511 / 60;
        caloriasResultado = caloriasUser / tempo;
        printf("Voce precisa dancar por: %d minutos", caloriasResultado);
        break;

    
    default:
        break;
    }

    return 0;
}