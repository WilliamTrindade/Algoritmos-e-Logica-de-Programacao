#include<stdio.h>
#include<string.h>
main(){
	char usuario[20] = {"Cel.Jhon"};
	char senha[50] = {"nasa2000"};
	char camposenha[50];
	printf("\tDigite a senha : %s \n\t", usuario);
	gets(camposenha);
	int x;
	x = strcmp(camposenha, senha);
	if(x==0){
		printf("senha correta");
	}else{
		printf("senha incorreta");
	}
}
