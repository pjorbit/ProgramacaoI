#include <stdio.h>
#include <locale.h>

/*Este laboratório em especial utiliza três tipos de cobaias: sapos, ratos e coelhos. Para obter estas
informações, ela sabe exatamente o número de experimentos que foram realizados, o
tipo de cobaia utilizada e a quantidade de cobaias utilizadas em cada experimento.
Faça um programa que leia um valor inteiro N que indica os vários casos de teste que
vem a seguir. Cada caso de teste contém um inteiro que representa a quantidade de
cobaias utilizadas e uma letra ('C', 'R' ou 'S'), indicando o tipo de cobaia (R:Rato S:Sapo
C:Coelho). 
Apresente o total de cobaias utilizadas
O total de cada tipo de cobaia utilizada
O percentual de cada uma em relação ao total de cobaias utilizadas, sendo
que o percentual deve ser apresentado com dois dígitos após o ponto.*/


//Calculo da porcentagem : (qtnCobaias * qtnSapos) / 100;

int main() {
    setlocale(LC_ALL, "Portuguese");

    char opcaoUser;
    int qtnSapos=0, qtnRatos=0, qtnCoelhos=0, qtnCobaias=0;
    float porcentagemSapos=0, porcentagemCoelhos=0, porcentagemRatos=0;

    printf("COBAIAS UTILIZADAS! \n");
    printf("Por favor, escolha uma das opcoes! \n");
    while (opcaoUser!='F') {
        printf("C -- Coelho \nR -- Rato \nS -- Sapo \nF -- Finalizar programa \n");
        scanf(" %c", &opcaoUser);
        if(opcaoUser=='C') {
            qtnCobaias = qtnCobaias + 1;
            qtnCoelhos = qtnCoelhos + 1;
        } else if(opcaoUser=='R') {
            qtnCobaias = qtnCobaias + 1;
            qtnRatos = qtnRatos + 1;
        } else if(opcaoUser=='S') {
            qtnCobaias = qtnCobaias + 1;
            qtnSapos = qtnSapos + 1;
        }
    }
    porcentagemCoelhos = ((qtnCoelhos*100) / qtnCobaias);
    porcentagemRatos = ((qtnRatos*100) / qtnCobaias);
    porcentagemSapos = ((qtnSapos*100) / qtnCobaias);
    printf("A quantidade de cobaias utilizadas foi: %d\n", qtnCobaias);
    printf("O total de cobaias coelhos foi de: %d e seu percentual foi de %.2f%% \n", qtnCoelhos, porcentagemCoelhos);
    printf("O total de cobaias ratos foi de: %d e seu percentual foi de %.2f%% \n", qtnRatos, porcentagemRatos);
    printf("O total de cobaias sapos foi de: %d e seu percentual foi de %.2f%% \n", qtnSapos, porcentagemSapos);
    return 0;
}