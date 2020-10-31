#include<stdio.h>
#include"function.h"
main(){
	int x, y, i, j, maior;
	int vet[3][3] = {	
						{1,0,1},
						{10,6,0},
						{1,0,1}
					};
	maior = vet[0][0];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(vet[i][j] > maior){
				maior = vet[i][j];
				x=i;
				y=j;
			}
		}
	}
	printf("Maior = %d", maior);
	funcao(x, y);
	
}

