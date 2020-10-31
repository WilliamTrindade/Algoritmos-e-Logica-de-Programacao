#include <stdio.h>
main(){
	int a;
	int b;
	int c;
	printf("Digite o valor de A: \n");
	scanf("%d", &a);
	printf("Digite o valor de B: \n");
	scanf("%d", &b);
	printf("Digite o valor de C: \n");
	scanf("%d", &c);
	printf("As soma sao : %d %d %d\n", a+b, a+c, b+c);
	printf("As multiplicacoes sao : %d %d %d\n", a*b, a*c, b*c);
	printf(" \n A = %d \n B = %d \n C = %d \n", a,b,c);
}
