#include <stdio.h>
main(){
	int vetor[5] = {};
	printf("__Arrays__ \n");
	for(int i=0; i<5; i++){	
		printf(" Posicao: [%d] \n Endereco Array: %d\n Endereco da Posicao: %d \n Valor: %d \n Tamaho do Array : %d \n Tamanho da Posicao : %d \n\n\n", i, &vetor, &vetor[i], vetor[i], sizeof(vetor) , sizeof(vetor[i]) );
	}
}
