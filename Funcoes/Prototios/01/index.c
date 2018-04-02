#include <stdio.h>
#include <math.h>

float media(float a, float b, float c, float d);

main(){
	float a, b, c, d;
	printf("Media \n");
	printf("Digite a nota :  \n");
	scanf("%f %f %f %f", &a, &b, &c, &d);
	float m = media(a, b, c, d);
	printf("A media das notas e : %.0f \n", m);
}
float media(float a, float b, float c, float d){
	return (a + b + c + d)/ 4;	
}
