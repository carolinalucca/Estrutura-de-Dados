#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int n;
int menu();
void popularOrdenarArray(int *pont);

int main() {
	setlocale(LC_ALL, "portuguese");
	
	printf("Informe o valor para o 'n': ");
	scanf("%d", &n);
	
	int array[n];
	
	//int opcao = menu();
	
	popularOrdenarArray(array);
	
	return 0;
}

int menu() {
	int op = 0;
	do {
		system("cls");
		printf("*****************************************************************\n");
		printf("1 - Preencher o vetor e mostrar ordenado\n");
		printf("2 - Mostrar maior elemento do vetor\n");
		printf("3 - Mostrar menor elemento do vetor\n");
		printf("4 - Mostrar elementos do meio\n");
		printf("5 - Informar se o valor esta presente no vetor\n");
		printf("6 - Informar quantas vezes o valor apresenta no vetor\n");
		printf("7 - Mostrar ordem inversa\n");
		printf("8 - Unir 2 vetores em um terceiro vetor\n");
		printf("9 - Unir 2 vetores em um terceiro vetor, mantendo ordenado\n");
		printf("10 - Sair da aplicação\n");
		printf("\n");
		printf("escolha a opção: ");
		scanf("%d", &op);
	} while (op == 0 || op < 0 || op > 10);
}         
          
void popularOrdenarArray(int *pont) {
	int *aux;
	aux = pont;
	//input values for the array
	for(int i = 0; i < n; i++) {
		printf("Informe o valor para a %dº posição: ", i+1);
		scanf("%d", pont);
		pont++; //'walking' with the pointer 'index'
	}
	//sort an array
	
	printf("\n");
	for(int i = 0; i < n; i++) {
		printf("O valor na %dº posição é: %d\n", i+1, *aux);
		aux++;
	}
}
