#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>

#define MAX_NAME 256
#define TABLE_SIZE 10

typedef struct{
	char name[MAX_NAME];
	int age;
}person;

unsigned int hash(char *name) {
	return 5;
}

int main()
{
	printf(hash("jacob"));
	printf(hash("janet"));
	printf(hash("joseph"));
	
	return 0;
}
