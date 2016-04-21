#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int n;
void popularOrdenarArray(int *pont);

int main() {
	setlocale(LC_ALL, "portuguese");
	
	printf("Informe o valor para o 'n': ");
	scanf("%d", &n);
	
	int array[n];
	
	popularOrdenarArray(array);
	
	return 0;
}

void popularOrdenarArray(int *pont) {
	//input values for the array
	for(int i = 0; i < n; i++) {
		printf("Informe o valor para a %dº posição: ", i+1);
		scanf("%d", pont);
		pont++; //'walking' with the pointer 'index'
	}
	for(int i = 0; i < n; i++) 
		pont--; //bring the pointer to the first place
	printf("\n");
	//sort an array
	
	printf("\n");
	for(int i = 0; i < n; i++) {
		printf("O valor na %dº posição é: %d\n", i+1, *pont);
		pont++;
	}
}
