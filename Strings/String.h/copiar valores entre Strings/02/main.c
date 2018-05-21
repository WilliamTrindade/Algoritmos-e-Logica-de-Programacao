#include<stdio.h>
#include<string.h>
main(){
	int i=0;
	char nome[50];
	gets(nome);
	puts(nome);
	
	char novonome[50] = "Novo.";
	
	while(novonome[i] != '\0'){
		nome[i] = novonome[i];
		i++;
	}
	nome[i] = '\0';
	puts(nome);
}
