#include<stdio.h>
#include<string.h>
main(){
	char palavra[50] = {};
	int resp = 0;
	printf("Digite a palavra \n");
	gets(palavra);	
	while(resp == 0){
		printf("Voce quer converter para maiuscula = 1 ou minuscula = 2 \n");
		scanf("%d", &resp);
		if(resp == 1){
			strupr(palavra);
			puts(palavra);
		}else if(resp == 2){
			strlwr(palavra);
			puts(palavra);
		}else{
			printf("Não entendi? presione enter e digite novamente \n");
			system("pause");
			resp = 0;
			system("cls");
		}		
	}
}
