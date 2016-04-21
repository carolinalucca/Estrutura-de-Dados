#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int n;
int menu();
void popularOrdenarArray(int *pont);
int maiorValor(int *pont);
int menorValor(int *pont);
int contemValor(int *pont, int value);
int contValor(int *pont, int value);
void inverter(int *pont);
void meios(int *pont);

int main() {
	//to use somes words
	setlocale(LC_ALL, "Portuguese");
	
	printf("Informe o valor para o 'n': ");
	scanf("%d", &n);
	
	int array[n];
	int val;
	
	while(1 < 2) {
		int opcao = menu();
	
		switch(opcao) {
			case 1:
				system("cls");
				popularOrdenarArray(array);
				system("pause");
				break;
			case 2:
				printf("O maior elemento é: %d\n", maiorValor(array));
				system("pause");
				break;
			case 3:
				printf("O Menor elemento é: %d\n", menorValor(array));
				system("pause");
				break;
			case 4:
				system("cls");
				meios(array);
				system("pause");
				break;
			case 5:
			    printf("Informe um valor para verificação: \n");
			    scanf("%d", &val);
				if(contemValor(array, val) == 1)
					printf("O valor %d foi encontrado no vetor !\n",val);
				else
					printf("O valor %d NÃO foi encontrado no vetor !\n",val);
				system("pause");
				break;
			case 6:
				printf("Informe um valor para verificação: \n");
			    scanf("%d", &val);
				printf("O valor %d apareceu %d vez(es) no vetor !\n", val,contValor(array,val));
				system("pause");
				break;
			case 7:
				system("cls");
				printf("Ordem inversa: \n");
				inverter(array);
				system("pause");
				break;
			case 8:
				
				break;	
			case 9:
				
				break;				
			case 10:
    			exit(0);
				break;	
		}
	}
	
	return 0;
}

int menu() {
	int op = 0;
	do {
		system("cls"); //clear the CMD
		printf("*****************************************************************\n"); // Create a menu
		printf("1 - Preencher o vetor e mostrar ordenado\n");
		printf("2 - Mostrar maior elemento do vetor\n");
		printf("3 - Mostrar menor elemento do vetor\n");
		printf("4 - Mostrar elementos do meio\n");
		printf("5 - Informar se o valor esta presente no vetor\n");
		printf("6 - Informar quantas vezes o valor apresenta no vetor\n");
		printf("7 - Mostrar ordem inversa\n");
		printf("8 - Unir 2 vetores em um terceiro vetor\n");
		printf("9 - Unir 2 vetores em um terceiro vetor, mantendo ordenado\n");
		printf("10 - Sair da aplicaÃ§Ã£o\n");
		printf("\n");
		printf("escolha a opção: ");
		scanf("%d", &op);
	} while (op == 0 || op < 0 || op > 10);
}         
          
void popularOrdenarArray(int *pont) {
	//New variable to storage the pointer value
	int *aux;
	aux = pont;
	int i,j,t;
	//input values for the array
	for(i = 0; i < n; i++) {
		printf("Informe o valor para a %dº posição: ", i+1);
		scanf("%d", aux);
		aux++; //'walking' with the pointer 'index'
	}
	//reset aux
	aux = pont;
	
	//sort an array ASC
	for(i = 0; i < n; i++) {
       for(j=0;j<n;j++)
       {
           if( *(aux+i) < *(aux+j))
           {
               t = *(aux+i);

               *(aux+i) = *(aux+j);
               *(aux+j) = t;
           }
       }
	}
	
	printf("\nMostrando os valores ordernados\n"); //showing the values in screen
	for(i = 0; i < n; i++) { 
		printf("O valor na %dº posição é: %d\n", i+1, *aux);
		aux++;
	}
}

int maiorValor(int *pont) {
	int *aux;
	aux = pont;
	int i;
	
	int max = *aux;
	
	for(i = 0; i < n; i++) {
		if(*aux > max)
			max = *aux;
		aux++;
	}
	return max;
}

int menorValor(int *pont) {
	int *aux;
	aux = pont;
	int i;
	
	int max = *aux;
	
	for(i = 0; i < n; i++) {
		if(*aux < max)
			max = *aux;
		aux++;
	}
	return max;
}

int contemValor(int *pont, int value) {
	int *aux;
	aux = pont;
	int i;
	
	for(i = 0; i < n; i++) {
		if(*aux == value)
			return 1;
		aux++;
	}
	return 0;
}

int contValor(int *pont, int value) {
	int *aux;
	aux = pont;
	int i,cont = 0;
	
	for(i = 0; i < n; i++) {
		if(*aux == value)
			cont++;
		aux++;
	}
	return cont;
}

void inverter(int *pont) {
	int *aux;
	aux = pont;
	int i,j,t;
			
	//sort an array DESC
	for(i = 0; i < n; i++) {
       for(j=0;j<n;j++)
       {
           if( *(aux+i) > *(aux+j))
           {
               t = *(aux+i);

               *(aux+i) = *(aux+j);
               *(aux+j) = t;
           }
       }
	}
	
	for(i = 0; i < n; i++) { 
		printf("O valor na %dº posição é: %d\n", i+1, *aux);
		aux++;
	}
}

/*
Excluidos o primeiro e o ultimo elemento, pois os restantes possuem elementos em ambos os lados,
ou seja, estão no meio o vetor.
2 ou menos elementos não serão exibidos.
*/
void meios(int *pont) {
	int i;
	pont++;
	for(i = 0; i < (n-2); i++) { 
		printf("O valor na %dº posição é: %d\n", i+1, *pont);
		pont++;
	}
}
