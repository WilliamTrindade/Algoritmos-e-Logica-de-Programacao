//ESTRUTURA DO VENDEDOR
struct x{
	int codigo;
	char nome[15];
	float total;
};
typedef struct x vendr;

//VETOR VENDEDOR
vendr vendedor[10];

//ESTRUTURA DA VENDA
struct y{
	int codigo;
	int codigoDaFilial;
	float valorDaVenda;
};
typedef struct y vend;

//VETOR VENDA
vend vendas[10];

//FUNÇÃO PARA CONCLUIR A VENDA
void conclui_venda(int codigo, float valor){
	vendedor[codigo].total += valor; 
}

//FUNÇÃO PARA VERIFICAR VENDA
void verifica_venda(int codigo, float valor){
	int x=0, i;
	for(i=0;i<10;i++){
		if(codigo == vendedor[i].codigo){
			printf("Venda Concluida");
			x=1;
			//CONCLUINDO A VENDA
			conclui_venda(codigo, valor);
		}
	}
	if(x==0){
		system("cls");
		printf("Venda Nao Protocolada!\n");
		system("pause");
		
	}
}

//FUNÇÃO PARA REGISTRAR VENDA
void registra_venda(){
	int codigo;
	int codigoDaFilial;
	float valor;
	printf("Digite o Codigo do Vendedor:\n");
	scanf("%d", &codigo);
	printf("Digite o Codigo da Filial:\n");
	scanf("%d", &codigoDaFilial);
	printf("Digite o Valor da Venda:\n");
	scanf("%f", &valor);
	//VERIFICANDO VENDA
	verifica_venda(codigo, valor);
}
void gerar_relatorio(){
	int i;
	printf("\tRELATORIO DE VENDEDORES\n");
	printf("Cod | Nome | Vendas em R$\n");
	
	for(i=0;i<10;i++){
		printf("%d ", vendedor[i].codigo);
		printf("%s ", vendedor[i].nome);
		printf("R$ %.2f \n", vendedor[i].total);
	}
	system("pause");
	system("cls");
}
