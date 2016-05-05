#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float **Alocar_matriz_dinamica(int l, int c);
float **Liberar_matriz_dinamica(int l, float **v);

int main() {
	setlocale(LC_ALL, "portuguese");
	int linha = 0, coluna = 0;
	
	printf("Informe a quantidade(s) de linha(s):");
	scanf("%d", &linha);
	printf("Informe a quantidade(s) de coluna(s):");
	scanf("%d", &coluna);
	
	float **matriz = Alocar_matriz_dinamica(linha, coluna);
	
	//Parte 2
	
	Liberar_matriz_dinamica(linha, matriz);
	return 0;
}

float **Alocar_matriz_dinamica(int l, int c) {
	float **matriz;
	matriz = (float**) malloc(l * sizeof(float *));
	
	int i;
	for (i = 0; i < l; i++)
		matriz[i] = (float *) malloc(l * sizeof(float));
		
	int j;
	for(i = 0; i < l; i++) {
		for(j = 0; j < c; j++) {
			printf("Informe o valor para a posição [%d][%d]", i+1, j+1);
			scanf("%f", &(*(*(matriz+i)+j)));
		}
	}
	
	return matriz;
}


float **Liberar_matriz_dinamica(int l, float **v) {
	int i;
	float **matriz = v;
	for (i = 0; i < l; i++)
		free(matriz[i]);
}
