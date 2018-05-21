#include<stdio.h>
#include<string.h>
main(){
	int i=0, j, x;
	char nome[50];
	char sobrenome[50];
	gets(nome);
	gets(sobrenome);
	while(sobrenome[j] != '\0'){
		if (nome[i] == '\0'){
			x=1;
			nome[i] = sobrenome[j];
			j++;
		}
		if(x==1){
			nome[i] = sobrenome[j];
			j++;
		}
		i++;
		
	}
	puts(nome);
	
}
