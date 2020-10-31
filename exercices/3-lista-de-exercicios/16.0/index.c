#include <stdio.h>
#include <stdlib.h>

main(){
	int x;
	printf ("Deseja saber se un numero é primo? \n");
	x=1;
	//for (;x<100;x){
		printf ("Informe um numero: \n");
		scanf ("%d", &x);
		int i, teste;
		if (x%x==0 && x%1==0){
			for(i=1;i<x;i++) {
				if(i != 1 && i != x) {
					teste = x % i == 0 ? 0 : 1;
					if(teste == 0) {
						break;
					}					
				}
			}
			if(teste == 1){
				printf ("%d é primo! \n",x);	
			} else {
				printf ("%d nao é primo! \n",x);
			}			
		}
	//}
}
