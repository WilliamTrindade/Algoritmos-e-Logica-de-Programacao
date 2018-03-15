#include <stdio.h>
main(){
	int idade;
	printf("Digite a idade:");
	scanf("%d", &idade);
	if(!(idade >= 16)){
		printf("Voce ainda nao pode votar");
	}
}
