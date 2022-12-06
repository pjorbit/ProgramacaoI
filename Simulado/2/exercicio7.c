#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>

/*Um radar de trânsito faz a medição de velocidade de veículos e,
dependendo do valor, calcula a multa a ser aplicada. Em uma
determinada via esse radar foi configurado da seguinte forma:
 Se a velocidade for maior que 80 km/h, a multa é de R$ 360;
 Se a velocidade for maior que 60 km/h, a multa é de R$ 180;
 Se a velocidade for menor ou igual a 60 km/h, não há multa.
Escreva um algoritmo que calcule a multa de acordo com a velocidade
de um veículo.
OBS: fazer uma função que imprime as opções solicita a opção
desejada e retorna a opção escolhida.
No programa principal, testar a opção escolhida e ativar a função
correspondente (uma função para cada opção).*/

void semMulta();
void multaMedia();
void multaAlta();

int main() {
    setlocale(LC_ALL, "Portuguese");

    float velocidadeUser;

    printf("Qual a velocidade? ");
    scanf("%f", &velocidadeUser);

    if (velocidadeUser<=60) {
        semMulta();
    } else if(velocidadeUser<80) {
        multaMedia();
    } else if(velocidadeUser>=80) {
        multaAlta();
    }
    
    return 0;
}

float velocidade() {
    printf("");
}

void semMulta() {
    printf("Nao ha multas!");
}
void multaMedia() {
    printf("A multa foi de R$180,00");
}
void multaAlta() {
    printf("A multa foi de R$360,00");
}