#include <stdio.h>
#include <locale.h>

/*Faça um programa que simule a urna eletrônica. A tela a ser
apresentada deverá ser da seguinte forma:
As opções são:
1. Candidato Paulo de Jesus
2. Candidato Carlos Luz
3. Candidato Neves Rocha
4. Nulo
5. Branco
Entre com o seu voto:
O programa deverá ler os votos dos eleitores e, quando for entrado
o número 6, apresentar as seguintes informações:
a) O número de votos de cada candidato;
b) A porcentagem de votos nulos;
c) A porcentagem de votos brancos;
d) O candidato vencedor.*/

int main() {
    setlocale(LC_ALL, "Portuguese");

    int opcaoUser=0, candidato1=0, candidato2=0, candidato3=0, nulo=0, branco=0, totalVotos=0;
    float porcentagemNulo, porcentagemBranco;
    char vencedor[20];

    printf("URNA ELETRONICA \n");
    while (opcaoUser!=6) {
        printf("1 - Candidato Paulo de Jesus \n2 - Candidato Carlos Luz \n3 - Candidato Neves Rocha \n4 - Nulo \n5 - Branco \n6 - Encerrar votacao\n");
        printf("Entre com o seu voto: ");
        scanf("%d", &opcaoUser);

        switch (opcaoUser) {
        case 1:
            candidato1 = candidato1 + 1;
            totalVotos = totalVotos + 1;
            break;
        case 2:
            candidato2 = candidato2 + 1;
            totalVotos = totalVotos + 1;
            break;
        case 3:
            candidato3 = candidato3 + 1;
            totalVotos = totalVotos + 1;
            break;
        case 4:
            nulo = nulo + 1;
            totalVotos = totalVotos + 1;
            break;
        case 5:
            branco = branco + 1;
            totalVotos = totalVotos + 1;
            break;
        default:
            break;
        }
    }
    if(candidato1>candidato2&&candidato1>candidato3) {
        vencedor[20] = "Paulo Jesus";
    } else if(candidato2>candidato1&&candidato2>candidato3) {
        vencedor[20] = "Carlos Luz";
    } else if(candidato3>candidato1&&candidato3>candidato2){
        vencedor[20] = "Neves Rocha";
    }
    
    porcentagemNulo = ((nulo*100) / totalVotos);
    porcentagemBranco = ((branco*100) / totalVotos);
    printf("Candidato Paulo Jesus teve %d votos. \n", candidato1);
    printf("Candidato Carlos Luz teve %d votos. \n", candidato2);
    printf("Candidato Neves Rocha teve %d votos. \n", candidato3);
    printf("Porcentagem de votos nulos: %.1f%%. \n", porcentagemNulo);
    printf("Porcentagem de votos brancos: %.1f%%. \n", porcentagemBranco);
    printf("O grande vencedor foi: %s.", vencedor);

    return 0;
}