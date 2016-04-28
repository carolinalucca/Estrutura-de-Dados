#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int users;
int MenuPrincipal();
int Menu1();
int Menu2();

int main() {
	setlocale(LC_ALL, "Portuguese");
	printf("Informe a quantidade de usuário que devem ser cadastrados: ");
	scanf("%d", &users);
	
	int op = MenuPrincipal();
	
	switch(op) {
		case 1:
			op = Menu1();
			break;
		case 2:
			op = Menu2();
			break;
		default:
			exit(0);
			break;
	}
	
	system("pause");
	return 0;
}

int MenuPrincipal() {
	int opcao = 0;
	printf("|******************************|\n");
	printf("| 1 - Listagem                 |\n");
	printf("| 2 - Pesquisa                 |\n");
	printf("| 0, 3 ou outro - SAIR         |\n");
	printf("|******************************|");
	printf("\n");
	scanf("%d",&opcao);
	
	return opcao;
}

int Menu1() {
	int opcao = 0;
	printf("|**************************************************|\n");
	printf("| 1 - Mostrar apenas o número da casa              |\n");
	printf("| 2 - Mostrar Ano do nascimento                    |\n");
	printf("| 3 - Mostrar Mês do nascimento                    |\n");
	printf("| 4 - Mostrar Dia do nascimento                    |\n");
	printf("| 5 - Mostrar qual o último Sobrenome              |\n");
	printf("| 6 - Mostrar o primeiro nome                      |\n");
	printf("| 7 - Mostrar os nomes do meio, caso houver        |\n");
	printf("| 8, 9 ou outro - SAIR                             |\n");
	printf("|**************************************************|");
	printf("\n");
	scanf("%d",&opcao);
	
	return opcao;
}

int Menu2() {
		int opcao = 0;
	printf("|**************************************************|\n");
	printf("| 1 - Buscar por número de casa                    |\n");
	printf("| 2 - Buscar pessoas pelo sobrenome                |\n");
	printf("| 3 - Buscar pessoas pelo ano de nascimento        |\n");
	printf("| 4 - Buscar pessoas pelo mês de nascimento        |\n");
	printf("| 5, 6 ou outro - SAIR                             |\n");
	printf("|**************************************************|");
	printf("\n");
	scanf("%d",&opcao);
	
	return opcao;
}
