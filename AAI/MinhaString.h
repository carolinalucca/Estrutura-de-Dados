#include <stdlib.h>

int equals(char *string1, char *string2);
int equalsIgnoreCase(char *string1, char *string2);
char[] substring(char *string1, char *string2, int posInicial, int posFinal);
int length(char *string);
void toUpperCase(char *string);
void toLowerCase(char *string);
void replace(char *string, char velhoCaracter, char novoCaracter);
int lastIndexOf(char *string, char letra);
int firstIndexOf(char *string, char letra);

int main() {
	return 0;
}

int equals(char *string1, char *string2) { // 0 - false | 1 - true
	//resul == 1 ? printf("true") : printf("false");
	if(*string1 == *string2)
		return 1;
	else
		return 0;
}

int equalsIgnoreCase(char *string1, char *string2) { // 0 - false | 1 - true
	//resul == 1 ? printf("true") : printf("false");
	if(length(string1) != length(string2))
		return 0;
	int index;
	for(index = length(string1); string1[index] != '\0'; index++) {
		if(string1[index] != string2[index])
		return 0;
	}
	
	return 1;
}

int length(char *string) { //it's counting spaces
	char *aux;
	int cont = 0;
	for (aux = string; *aux != '\0'; aux++){
		cont++;
	}
	
	return cont;
}

int lastIndexOf(char *string, char letra) {
	int index;
	for(index=length(string)-1;nome[index]!=letra;index--); 
	
	if(index < 0) 
		return 0;
      
	return ++index;
}

int firstIndexOf(char *string,char letra) {
}
