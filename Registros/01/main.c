#include<stdio.h>
#include<string.h>
struct estoque{
	int Codigo;
	char Produto[50];
	int Qtd;
	float Preco;
};
main(){
	struct estoque item;
	scanf("%d", &item.Codigo);
	fflush(stdin);
	gets(item.Produto);
	fflush(stdin);
	scanf("%d", &item.Qtd);
	fflush(stdin);
	scanf("%f", &item.Preco);
	fflush(stdin);
}
