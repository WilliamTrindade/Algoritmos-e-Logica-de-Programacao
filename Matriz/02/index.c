#include<stdio.h>
main(){
	int i, j, vet[2][3] = {1,2,3,4,5,6};
	for(j=0;j<2;j++){
		for(i=0;i<3;i++){
			if(vet[j][i]%2==0) printf("%d \n", vet[j][i]);
		}
	}
}
