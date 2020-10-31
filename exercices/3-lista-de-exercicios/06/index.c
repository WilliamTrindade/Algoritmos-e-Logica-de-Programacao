#include<stdio.h>
main(){
	int i, n, x;
	x=0;
	n=1;
	for(i=0;n!=0;){
		scanf("%d", &n);
		n==10?x++:i;
	}
	printf("O numero 10 foi digitado %d vezes", x);
}
