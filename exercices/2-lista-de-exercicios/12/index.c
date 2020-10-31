#include <stdio.h>
main(){
 int n;
 printf("Digite um numero inteiro \n");
 scanf("%d", &n);
 if (n > 0){
 	printf("Positivo");
 	if(n%2 == 0){
 		printf(" E Par");
	}else{
		printf(" E Impar");
	}
 }else if(n<0){
 	printf("Negativo");
 }else{
 	printf("Zero");
 }
}
