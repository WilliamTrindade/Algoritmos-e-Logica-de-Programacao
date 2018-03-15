#include <stdio.h>
main(){
	int idade;
	char titulo;
	printf("Digite a sua idade \n");
	scanf("%d", &idade);
	fflush(stdin);
	printf("Voce tem titulo? s ou n \n");
	scanf("%c", &titulo);
	if (idade >= 16 && titulo == 's'){
		printf("Pode Votar");
	}else{
		printf("Ainda nao pode votar");
	}
	
}
