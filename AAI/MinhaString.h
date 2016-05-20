#ifndef MINHASTRING_H
#define MINHASTRING_H

typedef struct {
	int (*equals)(char*, char*);
	int (*equalsIgnoreCase)(char*, char*);
	void (*substring)(char*, char*, int, int);
	int (*length)(char*);
	void (*toUpperCase)(char*);
	void (*toLowerCase)(char*);
	void (*replace)(char*, char, char);
	int (*lastIndexOf)(char*, char);
	int (*firstIndexOf)(char*, char);
} String;

#define NEW { .equals = equals, .equalsIgnoreCase = equalsIgnoreCase, .substring = substring, .length = length, .toUpperCase = toUpperCase, .toLowerCase = toLowerCase, .replace = replace, .lastIndexOf = lastIndexOf, .firstIndexOf = firstIndexOf } 

#include "MinhaString.c"


#endif
