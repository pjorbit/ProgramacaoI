#include <stdio.h>
#include <locale.h>

/*Codifique uma função denominada aprovado() que receba como parâmetro
quatro valores double, referentes às notas bimestrais de um aluno na disciplina
de Geografia. A função deve retornar o valor “-1” caso o aluno tenha reprovado
(média menor 4.0), o valor “0” caso aluno tenha ficado em recuperação (média
entre 4.0 e 5.9), e o valor “1” caso o aluno tenha sido aprovado (média maior
ou igual a 6.0 ).No main principal terá um switch eu vai imprimir :APROVADO,
EM RECUPERAÇÃO, REPROVADO. Veja o exemplo a seguir:*/

void aprovado(double nota1, double nota2, double nota3, double nota4);

int main() {
    setlocale(LC_ALL, "Portuguese");

    double nota1, nota2, nota3, nota4;

    printf("Entre com suas 4 notas!\n");
    printf("Nota um: ");
    scanf("%lf", &nota1);
    printf("Nota dois: ");
    scanf("%lf", &nota2);
    printf("Nota tres: ");
    scanf("%lf", &nota3);
    printf("Nota quatro: ");
    scanf("%lf", &nota4);
    aprovado(nota1, nota2, nota3, nota4);

    return 0;
}

void aprovado(double nota1, double nota2, double nota3, double nota4) {
    double resposta = ((nota1+nota2+nota3+nota4)/4);
    if (resposta<4.0) {
        printf("Sua nota final foi de: %.2lf! Voce esta REPROVADO", resposta);
    } else if(resposta<=5.9) {
        printf("Sua nota final foi de: %.2lf! Voce esta de RECUPERACAO", resposta);
    } else {
        printf("Sua nota final foi de: %.2lf! Voce esta APROVADO", resposta);
    }
    return resposta;
}