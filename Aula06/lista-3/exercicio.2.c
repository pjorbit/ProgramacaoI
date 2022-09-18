#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int codigo;

    printf("Entre com o codigo do produto: \n");
    scanf("%d", &codigo);
    if(codigo == 1) {
        printf("Esse e um alimento nao perecivel");
    } else if(codigo >= 2 && codigo <= 4) {
        printf("Esse e um alimento perecivel");
    } else if(codigo == 5 || codigo == 6) {
        printf("Esse e um produto do vestuario");
    } else if(codigo == 7) {
        printf("Esse e um produto de higiene pessoal");
    } else if(codigo >= 8 && codigo <= 15 ) {
        printf("Esse e um produto de limpeza ou utensilios domesticos");
    } else {
        printf("Produto invalido!!");
    }

    return 0;
}