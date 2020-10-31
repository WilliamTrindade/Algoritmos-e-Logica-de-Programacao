#include<stdio.h>
#include<string.h>
#include"lib.h"
main(){
	while(cont=1){
		while(opt<1 || opt>4){
			printf("\tConcessionaria FastCar\n1.Cadastrar Automovel\n2.Consutar Automovel\n3.Gerar Relatorio\n4.Sair do Programa\n");
			scanf("%d",&opt);
			system("cls");
		}
		switch(opt){
			case 1:{
				cadastra();
				break;
			}
			case 2:{
				consulta();
				break;
			}
			case 3:{
				relatorio();
				break;
			}
			case 4:{
				system("cls");
				printf("Fechando....");
				break;
			}
		}	
	}
}
