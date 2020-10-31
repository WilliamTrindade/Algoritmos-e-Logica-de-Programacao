#include <stdio.h>
main(){
	float nota1;
	float nota2;
	float media;
	printf("Digite a Nota 1 \n");
	scanf("%f", &nota1);
	printf("Digite a nota 2m \n");
	scanf("%f", &nota2);
	media = (nota1 + nota2 ) / 2;
	if ( media >= 7.0){
		printf("Aprovado");
	}else{
		printf("Reprovado");
	}
}
