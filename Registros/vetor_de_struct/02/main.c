#include<stdio.h>
//STRUCT
struct disciplina{
	char nome[50];
	float nota1, nota2;
	float media;
};
//TYPEDEF DISC
typedef struct disciplina disc;
//FUNÇÃO QUE NÃO RETORNA CHAMADA REGISTROS FAZ A MEDIA
void registros (disc al[2]){//RECEBE UM VETOR COMO PARAMETRO
	int i;
	for(i=0;i<2;i++){
		al[i].media = (al[i].nota1 + al[i].nota2) / 2;
		puts(al[i].nome);
		printf("A media e : %.2f \n", al[i].media);
	}
}
//MAIN RECEBE OS DADOS DO ALUNO
main(){
	disc aluno[2];//VETOR DE STRUCT
	int i;
	for(i=0;i<2;i++){
		fflush(stdin);
		printf("Digite o nome do Aluno %d\n", i+1);
		gets(aluno[i].nome);
		system("cls");
		printf("Digite as 2 notas do %s\n", aluno[i].nome);
		scanf("%f %f", &aluno[i].nota1, &aluno[i].nota2);
		system("cls");
	}
	
//CHAMA-SE A FUNÇÃO REGISTROS() SE PASSA OS DADOS DO ALUNO COMO PARÂMETRO
	registros(aluno);//RECEBE UM VETOR DE STRUCT COMO PARÂMETRO
	system("pause");
}
