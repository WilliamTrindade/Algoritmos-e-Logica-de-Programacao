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
	printf("Codigo : ");
	scanf("%d", &item.Codigo);
	fflush(stdin);
	printf("Produto : ");
	gets(item.Produto);
	fflush(stdin);
	printf("QTD : ");
	scanf("%d", &item.Qtd);
	fflush(stdin);
	printf("Preco : ");
	scanf("%f", &item.Preco);
	fflush(stdin);
	
	printf("\n\nCodigo : %d\nProduto : %c\nQTD : %d\nPreco : %f", item.Codigo, puts(item.Produto), item.Qtd, item.Preco );
}
