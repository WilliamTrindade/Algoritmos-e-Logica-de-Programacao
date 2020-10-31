#include<stdio.h>
main(){
	float mat [2][5] = {}, vet[5] = {};
	int l, c;
	printf("\tInicio da Semana \n\n");
	for(l=0;l<2;l++){
		for(c=0;c<5;c++){
			printf("\n\nDigite o Preco do Produto %d\n",c+1 );
			scanf("%f", &mat[l][c]);
			vet[c] = vet[c] + mat[l][c] ;
		}
		system("cls");
		printf("\tFinal da Semana \n\n");
	}
	system("cls");
	printf("\tMedia dos Produtos\n\n");
	for(c=0;c<5;c++){
		printf("Produto %d ..........R$ %.2f \n\n",c+1, vet[c] / 2);
	}
}
