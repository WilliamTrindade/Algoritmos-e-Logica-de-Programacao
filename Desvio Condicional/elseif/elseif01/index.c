#include <stdio.h>
main(){
	int idade, anos;
	printf("Digite a idade \n");
	scanf("%d", &idade);
	
	anos = 16 - idade;
	
	if(idade >= 16){
		printf("Você pode votar \n");
	}else if(anos == 1){
		printf("Falta %d ano para voce votar \n", anos);
	}else{
		printf("Faltam %d anos para voce votar \n", anos);
	}
	system("pause");
}
