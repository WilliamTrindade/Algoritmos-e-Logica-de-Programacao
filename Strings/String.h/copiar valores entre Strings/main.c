#include<stdio.h>
#include<string.h>
main(){
	int i;
	char nome[50];
	char novonome[50];
	gets(nome);
	
	for(i=0;i<50;i++){
		novonome[i] = nome[i];
	}
	
	puts(novonome);
	
}
