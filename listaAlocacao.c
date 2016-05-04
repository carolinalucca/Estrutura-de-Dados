#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int * alocarVetor(int m);
void ordenarVetor(int *array);

int main() {
	setlocale(LC_ALL, "portuguese"); //to use some words
	
	int m; //parametro do exercicio 1
	printf("Informe o valor de 'm': ");
	scanf("%d", &m);
	
	int *vetor = alocarVetor(m);
	ordenarVetor(*vetor);
	
	printf("\n");
	
	int i;
	for(i=0;i<m;i++) { //impresão do mesmo na tela
		printf("%d\n",*vetor);
		vetor++;
	}
	
	return 0;
}

int * alocarVetor(int m) {
	int array[m];//alocando um vetor de parametro m
	
	int i;
	for (i=0;i<m;i++) { //preenchendo o mesmo
		printf("Informe o valor para a posição [%d]:", i+1);
		scanf("%d", array);
	}
	
	return *array; //retorna o pointer para o vetor
}

void ordenarVetor(int *array) { //ordenação do vetor ASC
	int i, j, temp;
	int *aux, *auxProx;
	for (i=0;i<5;i++)
    {
    	aux = array;
    	auxProx = array + 1;
        for (j=0;j<4;j++)
        {
            if (*aux > *auxProx)
            {
    	        temp = *aux;
                *aux = *auxProx;
                *auxProx = temp;
            }
            aux++;
            auxProx++;
        }
	}
}
