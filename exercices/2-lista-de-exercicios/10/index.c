#include <stdio.h>
main(){
	float a, p, imc;
	printf("Calcula IMC em C! \n");
	printf("Digite seu peso\ne em seguida sua altura \n");
	scanf("%f %f", &p, &a);
	imc = p / (a * a);
	if(imc >= 0 && imc < 18.5){
		printf("Abaixo do Peso");
	}else if(imc >= 18.5 && imc < 25 ){
		printf("Normal");
	}else if(imc >= 25 && imc < 30 ){
		printf("Pre-obeso");
	}else if(imc >= 30 && imc < 35){
		printf("Obeso classe I");
	}else if(imc >= 35 && imc < 40){
		printf("Obeso classe II");
	}else if(imc >= 40){
		printf("Obeso classe III");
	}
}
