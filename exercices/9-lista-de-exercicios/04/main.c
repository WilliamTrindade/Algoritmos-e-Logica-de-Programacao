#include<stdio.h>
#include<string.h>
main(){
	char a, palavra[50] = {};
	printf("Digite uma palavra \n");
	gets(palavra);
	printf("Digite um caratere \n");
	scanf("%c",&a);
	int i = 0, x=0;
	while(palavra[i] != '\0'){
		if(palavra[i] == a) x++;
		i++;
	}
	printf("O caractere %c aparece %d vezes na palavra %s",a, x, palavra);
}
