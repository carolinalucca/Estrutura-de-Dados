#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int * alocarVetor(int m);
void ordenarVetor(int *array);

int main() {
	setlocale(LC_ALL, "portuguese");
	
	int m;
	printf("Informe o valor de 'm': ");
	scanf("%d", &m);
	
	int *vetor = alocarVetor(m);
	ordenarVetor(*vetor);
	
	int i;
	for(i=0;i<m;i++) {
		printf("%d\n",*vetor);
		vetor++;
	}
	
	return 0;
}

int * alocarVetor(int m) {
	int array[m];
	
	int i;
	for (i=0;i<m;i++) {
		printf("Informe o valor para a posição [%d]:", i+1);
		scanf("%d", array);
	}
	
	return array;
}

void ordenarVetor(int *array) {
	int i, j, temp;
	int *aux, *auxProx;
	for (i=0;i<5;i++)
    {
    	auxProx=array;
    	aux=auxProx++;
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
