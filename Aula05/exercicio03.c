#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char resposta[50], resposta2[5], resposta3[5], resposta4[5], resposta5[5];
    char dalmata[] = "sssnn";
    char pastorAlemao[] = "nssnn";
    char bulldogIngles[] = "snsss";
    char bullTerrier[] = "snsns";
    char labrador[] = "nnnnn";
    char saoBernardo[] = "nsnns";
    char chowChow[] = "nnsss";
    char pequines[] = "nnsns";
    char cockerIngles[] = "nnsnn";

    printf("Seu cachorro possui pelagem curta? \n");
    scanf("%s", resposta);
    printf("Possui altura superior a 55cm? \n");
    scanf("%s", resposta2);
    strcat(resposta, resposta2);
    printf("Possui peso inferior a 31kg? \n");
    scanf("%s", resposta3);
    strcat(resposta, resposta3);
    printf("Possui expectativa de vida inferior de 10 anos? \n");
    scanf("%s", resposta4);
    strcat(resposta, resposta4);
    printf("Possui expectativa de vida inferior de 13 anos? \n");
    scanf("%s", resposta5);
    strcat(resposta, resposta5);

    if(resposta == dalmata) {
        printf("A raca do cachorro escolhida foi Dalmata");
    } 
    else if(resposta == pastorAlemao) {
        printf("A raca do cachorro escolhida foi Pastor Alemao");
    } 
    else if(resposta == bulldogIngles) {
        printf("A raca do cachorro escolhida foi Bulldog Ingles");
    } 
    else if(resposta == bullTerrier) {
        printf("A raca do cachorro escolhida foi Bull Terrier");
    } 
    else if(resposta == labrador) {
        printf("A raca do cachorro escolhida foi Labrador");
    } 
    else if(resposta == saoBernardo) {
        printf("A raca do cachorro escolhida foi Sao Bernardo");
    } 
    else if(resposta == chowChow) {
        printf("A raca do cachorro escolhida foi Chow Chow");
    } 
    else if(resposta == pequines) {
        printf("A raca do cachorro escolhida foi Pequines");
    } 
    else if(resposta == cockerIngles) {
        printf("A raca do cachorro escolhida foi Cocker Ingles");
    } else {
        printf("erro");
    }
    return 0;
}

