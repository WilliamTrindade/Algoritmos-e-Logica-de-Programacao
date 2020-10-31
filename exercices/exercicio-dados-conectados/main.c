#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <string.h>

#define TAM 10

struct produto {
   int cod;
   char nome[50];
   float preco;
   int status;
};
struct vendedor {
   int cod;
   char nome[50];
   int status;   
};
struct venda {
   int cod;
   int codProduto;
   int quantidade;
   int codVendedor;
   int status;
};
typedef struct produto Produto;
typedef struct vendedor Vendedor;
typedef struct venda Venda;

Vendedor encontraVendedor(Vendedor vendedores[TAM], 
						  char vendedor[50]) {
	int i;
	for(i=0;i<TAM;i++) {
		if(strcmp(vendedores[i].nome, vendedor) == 0) {
			return vendedores[i];
		}
	}
	Vendedor temp;
	temp.status = 0;
	return temp;
}

Produto encontraProduto(Produto produtos[TAM], int cod) {
	int i;
	for(i=0;i<TAM;i++) {
		if(produtos[i].cod == cod) {
			return produtos[i];
		}
	}
	Produto temp;
	temp.status = 0;
	return temp;
}

void cadastraTudo(Produto produtos[TAM],
				  Vendedor vendedores[TAM],
				  Venda vendas[TAM]);
				  
void mostraVendas(Produto produtos[TAM],
				  Vendedor vendedores[TAM],
				  Venda vendas[TAM], char nomeVendedor[50]) {
	// buscar o vendedor com base no nome
	Vendedor vend = encontraVendedor(vendedores, 
									 nomeVendedor);
	// verifica se o vendedor existe, sen?o mostra o erro e sai da funcao
	if(vend.status == 0) {
		printf("Vendedor nao cadastrado!");
		return;
	}
	// busca as vendas do vendedor encontrado
	int i;
	for(i=0;i<TAM;i++) {
		// se a venda desse indice do vetor, for do vendedor buscado
		if(vendas[i].codVendedor == vend.cod) {
			// apresenta o vendedor, previamente buscado
			printf("Vendedor: %s\n", vend.nome);
			// apresenta a quantidade de produtos daquela venda
			printf("Quantidade: %d\n", vendas[i].quantidade);
			// busca o produto, com base no codigo do produto da venda atual
			Produto prod = encontraProduto(produtos, vendas[i].codProduto);
			// verifica se o produto foi encontrado, ou seja o codigo ? valido
			if(prod.status == 0) {
				// caso o produto nao tenha sido encontrado, apresenta que tal codigo ? invalido
				printf("Codigo de produto invalido: %d", vendas[i].codProduto);
			} else {
				// se o produto existe, apresenta o nome do produto
				printf("Produto: %s\n", prod.nome);
			}			
			printf("\n");
		}
	}
}
int main () {
    Produto produtos[TAM];
    Vendedor vendedores[TAM];
	Venda vendas[TAM];
	cadastraTudo(produtos, vendedores, vendas);
	mostraVendas(produtos, vendedores, vendas, "Ana");
}

void cadastraTudo(Produto produtos[TAM],
				  Vendedor vendedores[TAM],
				  Venda vendas[TAM]) {
	produtos[0].cod = 1;
	strcpy(produtos[0].nome, "TV");
	produtos[0].preco = 1000.00;
	produtos[0].status = 1;
	produtos[1].cod = 2;
	strcpy(produtos[1].nome, "Geladeira");
	produtos[1].preco = 1250.00;
	produtos[1].status = 1;
	produtos[2].cod = 3;
	strcpy(produtos[2].nome, "Cafeteira");
	produtos[2].preco = 250.00;
	produtos[2].status = 1;
	//
	vendedores[0].cod = 1;
	strcpy(vendedores[0].nome, "Ana");
	vendedores[0].status = 1;
	vendedores[1].cod = 2;
	strcpy(vendedores[1].nome, "Marcos");
	vendedores[1].status = 1;
	vendedores[2].cod = 3;
	strcpy(vendedores[2].nome, "Mariel");
	vendedores[2].status = 1;
	//
	vendas[0].cod = 1;
	vendas[0].codProduto = 1;
	vendas[0].quantidade = 1;
	vendas[0].codVendedor = 1;
	vendas[0].status = 1;
	
	vendas[1].cod = 2;
	vendas[1].codProduto = 1;
	vendas[1].quantidade = 2;
	vendas[1].codVendedor = 2;
	vendas[1].status = 1;
	
	vendas[2].cod = 1;
	vendas[2].codProduto = 2;
	vendas[2].quantidade = 1;
	vendas[2].codVendedor = 1;
	vendas[2].status = 1;
	
	vendas[3].cod = 1;
	vendas[3].codProduto = 3;
	vendas[3].quantidade = 1;
	vendas[3].codVendedor = 1;
	vendas[3].status = 1;
	
	vendas[4].cod = 1;
	vendas[4].codProduto = 2;
	vendas[4].quantidade = 2;
	vendas[4].codVendedor = 3;
	vendas[4].status = 1;
	
	vendas[5].cod = 1;
	vendas[5].codProduto = 2;
	vendas[5].quantidade = 1;
	vendas[5].codVendedor = 3;
	vendas[5].status = 1;
}
