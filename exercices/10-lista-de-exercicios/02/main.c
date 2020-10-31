#include<stdio.h>
struct user{
	char nome[40], sexo;
	int idade;
};
main(){
	struct user usuario[2];
	int i;
	char s;
	for(i=0;i<2;i++){
		printf("Usuario %d \nNome : \n", i+1);
		gets(usuario[i].nome);
		fflush(stdin);
		printf("sexo | m / f \n");
		scanf("%c", &usuario[i].sexo);
		fflush(stdin);
		printf("Idade : \n");
		scanf("%d", &usuario[i].idade);
		fflush(stdin);
	}
	printf("\nDigite um sexo para verificar !\n");
	scanf("%c",&s);
	fflush(stdin);
	for(i=0;i<2;i++){
		if(usuario[i].sexo == s){
			printf("\nUsuario %d \nNome : \n", i+1);
			puts(usuario[i].nome);
			printf("Idade : \n");
			printf("%d", usuario[i].idade);
		}
	}
}
