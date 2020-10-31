#include<stdio.h>
main(){
	int i,x;
	char sexo;
	float altura, maior = 0 , menor, mediatodos, mediaf;
	for(i=0;i<3;i++){
		printf("Digite a sua altura \n");
		scanf("%f", &altura);
		printf("Digite seu sexo \n");
		scanf(" %c", &sexo);
		
		if(altura > maior) maior = altura;
		if(i==0) menor = altura;
		if(altura < menor) menor = altura;
		
		mediatodos=mediatodos + altura;
		if(sexo == 'f'){
			mediaf=mediaf+altura;
			x++;
		}	
	}
	mediatodos=mediatodos/(i+1);
	mediaf=mediaf/x;
	printf("A maior altura e : %.2f \nA menor altura e : %.2f \n", maior, menor);
	printf("A media de todos e : %.2f \n", mediatodos);
	printf("A media das alturas das mulheres e : %.2f ", mediaf);	
}
