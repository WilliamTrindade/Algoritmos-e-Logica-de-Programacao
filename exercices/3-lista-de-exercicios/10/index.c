#include<stdio.h>
main(){
	int n1, n2, i, c=1;
	printf("Digite um Numero: \n");
	scanf(" %d", &n1);
	n2=n1+1;//deixa o n2 diferente para passar no laco
	while(n2!=n1){
		printf("Digite um Numero : \n");
		scanf(" %d", &n2);
		if(n2==n1){
			printf("Acertou com %d tentativa(s)", c);
		}else{
			n2<n1?printf("O numero e maior \n") : printf("O numero e menor \n");
			c++;
		}
	}
}

