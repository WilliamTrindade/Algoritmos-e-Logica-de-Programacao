#include <stdio.h>
main(){
	int i, j;
	int veta[2][3];
	int vetb[3][2];
	printf("Digite os numeros do vetor  \n");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			scanf("%d", &veta[i][j]);
		}
	}
	printf("Vetor Original \n");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf(" %d ",veta[i][j]);
		}
		printf("\n");
	}
	
	vetb[0][0] = veta[0][0];
	vetb[0][1] = veta[1][0];
	vetb[1][0] = veta[0][1];
	vetb[1][1] = veta[1][1];
	vetb[2][0] = veta[0][2];
	vetb[2][1] = veta[1][2];
	
	printf("Vetor Transposto \n");
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			printf(" %d ", vetb[i][j]);
		}
		printf("\n");
	}
}
