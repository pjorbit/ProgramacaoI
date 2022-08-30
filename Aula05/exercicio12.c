#include <stdio.h>
#include <locale.h>

float funcTaxa(float n, float h);

int main() {
    setlocale(LC_ALL, "Portuguese");

    int alternativa;
    float taxaNat, taxaMort, habitantes, nascidos, mortos;

    printf("Por favor, escolha uma opcao: \n");
    printf("1 - Taxa de Natalidade\n");
    printf("2 - Taxa de Mortalidade\n");
    scanf("%d", &alternativa);

    switch (alternativa)
    {
    case 1:
        printf("Entre com o numero de nascimentos e em seguida o numero de habitantes: \n");
        scanf("%f", &nascidos);
        scanf("%f", &habitantes);
        taxaNat = funcTaxa(nascidos, habitantes);
        printf("A taxa de natalidade em sua cidade foi de: %.2f", taxaNat);
        break;
    case 2:
        printf("Entre com o numero de mortos e em seguida o numero de habitantes: \n");
        scanf("%f", &mortos);
        scanf("%f", &habitantes);
        taxaMort = funcTaxa(mortos, habitantes);
        printf("A taxa de mortalidade em sua cidade foi de: %.2f", taxaMort);
        break;
    default:
        break;
    }

    return 0;
}

float funcTaxa(float n, float h){
    float t;
    t = ((n * 1000) / h);
    return t;
}
