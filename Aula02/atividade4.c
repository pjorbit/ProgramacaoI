#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	int opcao;
	printf("Cadastro de Clientes\n");
	printf("0 - Fim\n");
	printf("1 - Inclui\n");
	printf("2 - Altera\n");
	printf("3 - Exclui\n");
	printf("4 - Consulta\n");
	printf("Op��o: \n");
	scanf("%d", &opcao);
	switch(opcao) {
		case 0:
			printf("Voc� escolheu a op��o 0 - Fim");
			break;
		case 1:
			printf("Voc� escolheu a op��o 1 - Inclui");
			break;
		case 2:
			printf("Voc� escolheu a op��o 2 - Altera");
			break;
		case 3:
			printf("Voc� escolheu a op��o 3 - Exclui");
			break;
		case 4:
			printf("Voc� escolheu a op��o 4 - Consulta");
			break;
	}
	return 0;
}

