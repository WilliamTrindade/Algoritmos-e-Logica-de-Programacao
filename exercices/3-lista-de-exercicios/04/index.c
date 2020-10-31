#include <stdio.h>
main(){
	int vet[11] = {1,4,50,-10,25,-2,8,30,56,0, -32787};
	int i;
	int menor = 50000;
	for(i=0;i<11;i++){
		if(vet[i] < menor){
			menor = vet[i];
		}
	}
	printf("%d", menor);
}
