#include<stdio.h>
struct user{
	char nome[40], endereco[50], email[40];
};
main(){
	struct user jhon;
	gets(jhon.nome);
	gets(jhon.endereco);
	gets(jhon.email);
	printf("\n");
	puts(jhon.nome);
	puts(jhon.endereco);
	puts(jhon.email);
}
