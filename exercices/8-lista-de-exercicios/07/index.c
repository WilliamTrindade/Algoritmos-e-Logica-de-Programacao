#include<stdio.h>
main(){
	int i, j, soma;
	int mat[4][5] = {};
	for(i=0;i<4;i++){
		for(j=0;j<5;j++){
			soma=i+j;
			mat[i][j] = soma;
		}
	}
	for(i=0;i<4;i++){
		printf("\n");
		for(j=0;j<5;j++){
			printf("%d ", mat[i][j] );
		}
	}
}
