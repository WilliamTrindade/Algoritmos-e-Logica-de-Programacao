//PEGAR O TAMANHO DA STRUCT
#include<stdio.h>
#include<stdlib.h>

struct x{
	int cod;
	char nome[20];
	int idade;
	char endereco[50];
};
typedef struct x user;

main(){
	user a;
	printf("%d", sizeof(a));
}
