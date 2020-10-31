#include <stdio.h>
main(){
	int i;
	float n1, n2;
	printf("Digite 2 numeros nos colocamos na ordem \n");
	scanf("%f %f", &n1, &n2);
	
	n1 < n2 ? printf("%.2f , %.2f ", n1 , n2) : i ;
	n1 > n2 ? printf("%.2f , %.2f ", n2 , n1) : i ;
	n1 == n2 ? printf("%.2f , %.2f", n1 , n2) : i ;
}
