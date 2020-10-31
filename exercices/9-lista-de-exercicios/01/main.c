#include <stdio.h>
#include <string.h>
main(){
	char palavra[50];
	printf("\tDigite uma palavra \n");
	gets(palavra);
	strlwr(palavra);
	puts(palavra);
}
