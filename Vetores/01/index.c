#include <stdio.h>
main(){
	int vetor[5] = {};
	printf("Arrays \n");
	for(int i=0; i<5; i++){	
		printf("Posicao: [%d] |  Endereco Array: %d | Endereco da Posicao: %d | Valor: %d \n", i, &vetor, &vetor[i], vetor[i]);
	}
}
