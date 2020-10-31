#include<stdio.h>
main(){
	int veta[5] = {1,2,3,4,5}, matc[5][2] = {};
	int i, j;
	for(i=0;i<5;i++){
		for(j=0;j<2;j++){
			matc[i][0] = veta[i] + 5;
			matc[i][1] = veta[i] * veta[i];
			if(j==0)printf("%d ", matc[i][j]);
			if(j==1)printf("%d ", matc[i][j]);
		}
		printf("\n");
	}
}
