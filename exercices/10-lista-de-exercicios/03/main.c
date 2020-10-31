#include<stdio.h>
#include<string.h>
#include"lib.h"
main(){
	//VENDEDORES
	vendedor[0].codigo = 1;
	strcpy(vendedor[0].nome, "Maria");
	vendedor[1].codigo = 2;
	strcpy(vendedor[1].nome, "Mario");
	vendedor[2].codigo = 3;
	strcpy(vendedor[2].nome, "Eduardo");
	vendedor[3].codigo = 4;
	strcpy(vendedor[3].nome, "João");
	vendedor[4].codigo = 5;
	strcpy(vendedor[4].nome, "Leonardo");
	vendedor[5].codigo = 6;
	strcpy(vendedor[5].nome, "Leticia");
	vendedor[6].codigo = 7;
	strcpy(vendedor[6].nome, "Arthur");
	vendedor[7].codigo = 8;
	strcpy(vendedor[7].nome, "Carlos");
	vendedor[8].codigo = 9;
	strcpy(vendedor[8].nome, "Roberto");
	vendedor[9].codigo = 10;
	strcpy(vendedor[9].nome, "William");
	
	int r=1, s=0;
	while(r==1){		
		while(!(s>=1 && s<=3)){
			printf("\tSISTEMA JR INFORMATICA CANOAS - RS V1.0 BY TION inc.\n1.Registrar Venda\n2.Gerar Relatorio\n3.Sair->");
			scanf("%d", &s);
			system("cls");
		}
		switch(s){
			case 1: {
				registra_venda(vendedor[10]);
				s=0;
				break;
			}
			case 2:{
				gerar_relatorio();
				s=0;
				break;
			}
			case 3:{
				system("cls");
				printf("Fechando....");
				break;
			}
		}		
	}
}
