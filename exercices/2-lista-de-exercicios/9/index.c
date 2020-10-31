#include <stdio.h>
main(){
	float nota1, nota2, nota3, media;
	printf("Digite as tres notas \n");
	scanf("%f %f %f", &nota1, &nota2, &nota3);
	//nota1 e nota2
	nota1 > nota3 && nota2 > nota3 ? printf(" A media das 2 maiores notas e : %.1f ", media = (nota1 + nota2) / 2) : "";
	//nota2 e nota3
	nota2 > nota1 && nota3 > nota1 ? printf(" A media das 2 maiores notas e : %.1f", media = (nota2 + nota3) / 2) : "";
	//nota1 e nota3
	nota1 > nota2 && nota3 > nota2 ? printf(" A media das 2 maiores notas e : %.1f", media = (nota1 + nota3) / 2) : "";
	//iguais
	!( (nota1 > nota3 && nota2 > nota3) || (nota2 > nota1 && nota3 > nota1) || (nota1 > nota2 && nota3 > nota2) ) ? printf("Numeros iguais") : "" ;
}
