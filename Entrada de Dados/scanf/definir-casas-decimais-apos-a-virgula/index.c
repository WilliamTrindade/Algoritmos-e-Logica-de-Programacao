#include<stdio.h>
#include<stdlib.h>

main(){
	float area, base, altura;
	
	printf("Digite a base\n");
	scanf("%f", &base);
	
	printf("Digite a altura\n");
	scanf("%f", &altura);
	
	area = (base * altura) / 2;
	
  //printar com 2 casa decimais
	printf("A area e %.2f", area);
		
}
