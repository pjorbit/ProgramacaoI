#include <stdio.h>
#include <locale.h>

//declaração das funções
float areaTriangulo(float b, float h);
float perimetroTriangulo(float l1, float l2, float l3);
float areaRetangulo(float b, float h);
float perimetroRetangulo(float b, float h);
float areaQuadrado(float l);
float perimetroQuadrado(float l);
float areaTrapezio(float B, float b, float h);
float perimetroTrapezio(float B, float b, float h);
float areaLosango(float D, float d);
float perimetroLosango(float l);
float areaCirculo(float r);

//declaração das variáveis globais
int opcao2;
int opcao;

int main(void) {
	setlocale(LC_ALL, "portuguese");

	printf("Por favor escolha uma das opções: \n");
	printf("1 - Triângulo\n");
	printf("2 - Retângulo\n");
	printf("3 - Quadrado\n");
	printf("4 - Trapézio\n");
	printf("5 - Losango\n");
	printf("6 - Circulo\n");
	printf("Opção: \n");
	scanf("%d", &opcao);
	
	switch(opcao) {
		case 1 :
			printf("Você escolheu a opção 1 - Triângulo\n");
			printf("Gostaria de calcular a área ou o perímetro? \n");
			printf("1 - Área\n");
			printf("2 - Perímetro\n");
			scanf("%d", &opcao2);
			if(opcao2 == 1) {
				float base, altura, area;
				printf("Digite a base e em seguida a altura: \n");
				scanf("%f", &base);
				scanf("%f", &altura);
				area = areaTriangulo(base, altura);
				printf("A área do seu triângulo é de: %0.1f", area);
			} else if(opcao2 == 2){
				float perimetro, lado1, lado2, lado3;
				printf("Digite os lados do seu triângulo: \n");
				scanf("%f", &lado1);
				scanf("%f", &lado2);
				scanf("%f", &lado3);
				perimetro = perimetroTriangulo(lado1, lado2, lado3);
				printf("A área do seu triângulo é de: %0.1f", perimetro);
		}
		break;
		case 2 : 
			printf("Você escolheu a opção 2 - Retângulo\n");
			printf("Gostaria de calcular a área ou o perímetro? \n");
			printf("1 - Área\n");
			printf("2 - Perímetro\n");
			scanf("%d", &opcao2);
			if(opcao2 == 1) {
				float base, altura, area;
				printf("Digite a base e em seguida a altura: \n");
				scanf("%f", &base);
				scanf("%f", &altura);
				area = areaRetangulo(base, altura);
				printf("A área do seu retângulo é de: %0.1f", area);
			} else if(opcao2 == 2){
				float perimetro, base, altura;
				printf("Digite a base e altura do seu retângulo: \n");
				scanf("%f", &base);
				scanf("%f", &altura);
				perimetro = perimetroRetangulo(base, altura);
				printf("O perimetro do seu retângulo é de: %0.1f", perimetro);
			}
		break;
		case 3 :
			printf("Você escolheu a opção 3 - Quadrado\n");
			printf("Gostaria de calcular a área ou o perímetro? \n");
			printf("1 - Área\n");
			printf("2 - Perímetro\n");
			scanf("%d", &opcao2);
			if(opcao2 == 1) {
				float area, lado;
				printf("Digite o valor de um dos lados: \n");
				scanf("%f", &lado);
				area = areaQuadrado(lado);
				printf("A área do seu quadrado é de: %0.1f", area);
			} else if(opcao2 == 2){
				float perimetro, lado;
				printf("Digite o valor de um dos lados: \n");
				scanf("%f", &lado);
				perimetro = perimetroQuadrado(lado);
				printf("O perimetro do seu quadrado é de: %0.1f", perimetro);
			}
		break;
		case 4 :
			printf("Você escolheu a opção 4 - Trapézio\n");
			printf("Gostaria de calcular a área ou o perímetro? \n");
			printf("1 - Área\n");
			printf("2 - Perímetro\n");
			scanf("%d", &opcao2);
			if(opcao2 == 1) {
				float area, baseMaior, baseMenor, altura;
				printf("Digite o valor da base maior e em seguida o valor da base menor: \n");
				scanf("%f", &baseMaior);
				scanf("%f", &baseMenor);
				printf("Digite a altura: \n");
				scanf("%f", &altura);
				area = areaTrapezio(baseMaior, baseMenor, altura);
				printf("A área do seu trapézio é de: %0.1f", area);
			} else if(opcao2 == 2){
				float perimetro, baseMaior, baseMenor, altura;
				printf("Digite o valor da base maior e em seguida o valor da base menor: \n");
				scanf("%f", &baseMaior);
				scanf("%f", &baseMenor);
				printf("Digite a altura: \n");
				scanf("%f", &altura);
				perimetro = perimetroTrapezio(baseMaior, baseMenor, altura);
				printf("O perimetro do seu trapézio é de: %0.1f", perimetro);
			}
		break;
		case 5 :
			printf("Você escolheu a opção 5 - Losango\n");
			printf("Gostaria de calcular a área ou o perímetro? \n");
			printf("1 - Área\n");
			printf("2 - Perímetro\n");
			scanf("%d", &opcao2);
			if(opcao2 == 1) {
				float area, diagonalMaior, diagonalMenor;
				printf("Digite o valor da diagonal maior e em seguida a diagonal menor: \n");
				scanf("%f", &diagonalMaior);
				scanf("%f", &diagonalMenor);
				area = areaLosango(diagonalMaior, diagonalMenor);
				printf("A área do seu losango é de: %0.1f", area);
			} else if(opcao2 == 2){
				float perimetro, lado;
				printf("Digite o valor de um dos lados: \n");
				scanf("%f", &lado);
				perimetro = perimetroLosango(lado);
				printf("O perimetro do seu losango é de: %0.1f", perimetro);
			}
		break;
		case 6 :
			printf("Você escolheu a opção 6 - Círculo\n");
			printf("Gostaria de calcular a área do círculo? \n");
			printf("1 - Área\n");
			scanf("%d", &opcao2);
			if(opcao2 == 1) {
				float area, raio;
				printf("Digite o valor do raio do seu círculo: \n");
				scanf("%f", &raio);
				area = areaCirculo(raio);
				printf("A área do seu círculo é de: %0.1f", area);
			}
		break;
		default : printf("Entre com uma das opções");
	}
	return 0;
}

//funções triângulo
float areaTriangulo(float b, float h) {
	float a;
	a = ((b * h) / 2);
	return a;
}
float perimetroTriangulo(float l1, float l2, float l3) {
	float p;
	p = (l1 + l2 + l3);
	return p;
}

//funções retângulo
float areaRetangulo(float b, float h) {
	float a;
	a = (b * h);
	return a;
}
float perimetroRetangulo(float b, float h) {
	float p;
	p = (2 * (b + h));
	return p;
}

//funções quadrado
float areaQuadrado(float l) {
	float a;
	a = (l * l);
	return a;
}
float perimetroQuadrado(float l) {
	float p;
	p = (l * 4);
	return p;
}

//funções trapézio
float areaTrapezio(float B, float b, float h) {
	float a;
	a = (((B + b) * h) / 2);
	return a;
}
float perimetroTrapezio(float B, float b, float h) {
	float p;
	p = (B + b + h);
	return p;
}

//funções losango
float areaLosango(float D, float d) {
	float a;
	a = ((D * d) / 2);
	return a;
}
float perimetroLosango(float l) {
	float p;
	p = (4 * l);
	return p;
}

//função círculo
float areaCirculo(float r) {
	float a;
	float pi = 3.14;
	a = (pi * (r * 2));
	return a;
}

