#include <stdlib.h>

int equals(char *string1, char *string2); //DONE
int equalsIgnoreCase(char *string1, char *string2); //DONE
void substring(char *string1, char *string2, int posInicial, int posFinal); //DONE
int length(char *string); //DONE
void toUpperCase(char *string); //DONE
void toLowerCase(char *string); //DONE
void replace(char *string, char velhoCaracter, char novoCaracter); //DONE
int lastIndexOf(char *string, char letra); //DONE
int firstIndexOf(char *string, char letra); //DONE

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

void substring(char *string1, char *string2, int posInicial, int posFinal){
	    int i;
	
		for(i = 0; i + posInicial <= posFinal; i++) {
		string2[i] = string1[i + posInicial];
    	}   
}


int length(char *string) { //it's counting spaces
	char *aux;
	int cont = 0;
	for (aux = string; *aux != '\0'; aux++){
		cont++;
	}
	
	return cont;
}

void toUpperCase(char *string) {
	int i, j;
	for(i = 0;i <= length(string); i++) {
		if((int)string[i] >= 97 && (int)string[i] <= 122) {
			string[i] = (int)string[i] - 32;
		}
	}
}

void toLowerCase(char *string) { 
	int i, j;
	for(i = 0;i <= length(string); i++) {
		if((int)string[i] >= 97 && (int)string[i] <= 122) {
			string[i] = (int)string[i] + 32;
		}
	}
}

void replace(char *string, char velhoCaracter, char novoCaracter) {
	int i;
	for(i = 0;i <= length(string); i++) {
		if(string[i] == velhoCaracter)
			string[i] = novoCaracter;
	}
}

int lastIndexOf(char *string, char letra) {
	int index;
	for(index=length(string)-1;string[index]!=letra;index--); 
	
	if(index < 0) 
		return 0;
      
	return ++index;
}

int firstIndexOf(char *string,char letra) {
	int index;
	for(index=0;string[index]!=letra;index++); 
	
	if(index < length(string)) 
		return 0;
      
	return ++index;
}
