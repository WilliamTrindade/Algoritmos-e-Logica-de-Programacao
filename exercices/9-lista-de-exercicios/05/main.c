#include<stdio.h>
#include<string.h>
#include"bib.h"
//Cifra de Cesar
void main(){
	while(1){
		system("cls");
		int op;
		printf("\tCIFRA DE CESAR\n\n1-CRIPTOGRAFAR\n\n2-DESCRIPTOGRAFAR\n\n3-TABELA ASCII\n\n4-SAIR\n\n");
		scanf("%d", &op);
		switch(op){
			case 1:{
				system("cls");
				ler(op);
				break;
			}
			case 2:{
				system("cls");
				ler(op);
				break;
			}
			case 4:{
				system("cls");
				return;
				break;
			}
			case 3:{
				system("cls");
				ascii();
				break;
			}
			default:{
				printf("OPCAO INVALIDA!\n");
				system("pause");
				system("cls");
				break;
			}
		}
	}
}
