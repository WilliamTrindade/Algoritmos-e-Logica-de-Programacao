#include <stdio.h>
main(){
	int hora, minuto, segundo;
	printf("Configurando relogio ! \n");
	printf("Digite a Hora \n");
	scanf("%d", &hora);
	if(hora >= 0 && hora <=23){
		printf("Digite os minutos\ne em seguida os segundos \n");
		scanf("%d %d", &minuto, &segundo);
		if((minuto >= 0 && minuto <= 59) && (segundo >= 0 && minuto <= 59 )){
			printf("Horas, Minutos e segundos validos! \n");
			printf("Hora = %d : %d : %d ", hora, minuto, segundo);
		}else{
			printf("Minutos ou segundos invalidos! \n");
		}
	}else{
		printf("Hora Invalida! \n");
	}	
}
