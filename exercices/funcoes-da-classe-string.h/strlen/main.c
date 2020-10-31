#include<stdio.h>
main(){
	char palavra[50] = {};
	int i;
	gets(palavra);
	for(i=0;palavra[i] != '\0';i++);
	printf("O tamanho e : %d ", i);
}
