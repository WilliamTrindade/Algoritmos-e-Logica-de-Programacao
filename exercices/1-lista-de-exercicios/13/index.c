#include <stdio.h>
#include <math.h>
main(){
	float volume;
	float altura;
	float raio;
	
	printf("Calculo de Volume de uma lata de oleo! \n");
	printf("Digite a Altura da Lata \n");
	scanf("%f", &altura);
	printf("Digite o Raio da lata\n");
	scanf("%f", &raio);
	printf("O Volume da lata e : %.2f", volume = 3.14159 * pow(raio,2)*altura);
	
}
