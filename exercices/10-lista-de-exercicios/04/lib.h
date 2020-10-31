int opt=0, cont = 1, i, c;
//ESTRUTURA DO AUTOMOVEL
struct x{
	char placa[10];
	char descricao[50];
	char fabricante[20];
	char cor[20];
	int anodefabricacao;
	float preco;
};
typedef struct x car;

//VETOR CARROS
car carros[12] = {};

cadastra(){
	//NÃO PODE PASSAR DE 12 CARROS
	if(i<12){
		printf("\tCadastrar Carro %d \nPlaca:\n",i+1);
		fflush(stdin);
		gets(carros[i].placa);
		printf("\nDescricao:\n");
		fflush(stdin);
		gets(carros[i].descricao);
		printf("\nFabricante:\n");
		fflush(stdin);
		gets(carros[i].fabricante);
		printf("\nCor:\n");
		fflush(stdin);
		gets(carros[i].cor);
		printf("\nAno:\n");
		fflush(stdin);
		scanf("%d",&carros[i].anodefabricacao);
		printf("\nPreco\n");
		fflush(stdin);
		scanf("%f",&carros[i].preco);
		i++;
	}else if(i>=12){
		printf("Desculpa! Nao e possivel cadastar mais carros!\n");
		system("pause");
	}
	opt=0;
	system("cls");	
}
consulta(){
	
}
void relatorio(){
	printf("\tRelatorio\n");
	for(c=0;c<i;c++){
		printf("Codigo %d", c);
		
		printf("Placa ");
		puts(carros[c].placa);
		
		printf("Descricao ");
		puts(carros[c].descricao);
		
		printf("Fabricante ");
		puts(carros[c].fabricante);
		
		printf("Cor ");
		puts(carros[c].cor);
		
		printf("Ano %d", carros[i].anodefabricacao);
		printf("Preco R$ %.2f\n\n", carros[i].preco);			
	}
	opt=0;
	system("pause");
	system("cls");
}


