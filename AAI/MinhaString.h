#include <string.h>
#include <stdlib.h>

int equals(char *string1, char *string2);
int equalsIgnoreCase(char[] *string);
char[] substring(int posInicial, int posFinal);
char charAt(int posicao);
int compareTo()(char[] *string;
int compareToIgnoreCase(char[] *string);
int length(char *string);
void toUpperCase();
void toLowerCase();
void replace(char velhoCaracter, char novoCaracter);
int lastIndexOf(char *string, char letra);
int firstIndexOf(char *string, char letra);

int main() {
	return 0;
}

int equals(char *string1, char *string2) {
	//resul == 1 ? printf("true") : printf("false");
	if(*string1 == *string2)
		return 1;
	else
		return 0;
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
	for(index=strlen(string)-1;nome[index]!=letra;index--);  
	if(index<0){
		return 0;
	}
      
	return ++index;
}

int lastIndexOf(char *string,char letra) {
}
