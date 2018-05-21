#include<stdio.h>
#include<string.h>
main(){
	int i=0;
	char nome[50];
	char sobrenome[50];
	printf("Digite seu nome : ");
	gets(nome);
	printf("Digite seu sobrenome : ");
	gets(sobrenome);
	
	strcat(nome, sobrenome);
	
	puts(nome);
	
	
}
