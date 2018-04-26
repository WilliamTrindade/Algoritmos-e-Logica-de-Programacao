//1 - Valor do Hotel
//recebe o numero de diarias como parametro
calcule(int x){
	//define a diaria como sendo R$ 85.00
	float diaria = 85.00, valor, taxa;
	if(x < 10){
		taxa = 8.50;
	}else if(x >=10 && x <=14){
		taxa = 7.50;
	}else if(x > 15){
		taxa = 6.50;
	}
	/*a variavel valor guarda o preco total a ser pago ao hotel,
		incluindo a diaria somada a taxa de servico de acordo com
		o tempo que o cliente ficara no hotel.
	*/
	valor = (x * diaria) + (x * taxa);
	//exibe o valor a ser pago
	printf("O VALOR TOTAL E : R$ %.2f", valor);
}

//2 - numeros iguais ao menor numero lido
verifica(){
	int x = 1, i, y, menor, z = 0, menorantigo;
	for(i=0;x==1;i++){ 
	//executa o for enquanto o usuario  digitar 1
		if(i != 0 ){
		//na primeira volta do laco ele nao pergunta se o usuario quer adicionar mais um numero
			printf("Quer ler mais um numero?\n");
			printf("1 = Sim / 0 = Nao \n");
			scanf("%d", &x);
		}
		if(x==1){ 
		//se o usuario digitou 1 ele executa o seguinte codigo
			printf("\n\n Digite um numero Inteiro:\n");
			scanf("%d", &y);
			if(i==0){  
			//na primeira volta do laco ele atribui os seguntes valores
				menor = y;
				menorantigo = y; 
			}
			if(y <= menor){ 
			//verifica se o numero que o user digitou e menor ou igual ao menor numero
				menor = y; 
				//menor passa a ser o menor valor
				if(y < menorantigo){ 
				//se o user digitar um valor menor que o antigo o contador zera e se digitar um igaual o contador soma 1
					z=0; 
				}
				//o contador guarda o numero de vezes que o menor numero foi digitado
				if(i!=0){
					if(y==menorantigo){
						z++;
					}	
				}
			}	
			menorantigo = menor;
		}
	}					
	printf("\nA QUANTIDADE DE NUMEROS IGUAL AO MENOR NUMERO LIDO E %d", z);
}

//3- Numero Perfeito
int perfeito(int n){
	int i, soma=0, div;
	//verifica os numeros de 1 ate i ser menor que o numero passado como parametro
	for(i=1;i<n;i++){
		//se a divisao por i gerar resto 0 , i e um divisor logo e somado na variavel soma
		if(n%i==0) soma = soma + i;
	}
	//se a soma dos divisores e igual a ao numero passado para a funcao por parametro o mesmo e perfeito
	soma==n?printf("Perfeito") : printf("Imperfeito");
}

//4- altura dos atletas
alturas(){
	float alturas[10];
	int i,x, media = 0;
	//o laco vai ler a altura do 1° atleta ate o 10°
	for(i=1;i<11;i++){
		//vai perdir a altura ao user
		printf("Digite a altura %d : \n", i);
		scanf("%f", &alturas[i]);
		//a cada volta a variavel media guarda a soma das alturas
		media = media + alturas[i];
		//na ultima volta do laco a media e calculada
		if(i==10) media = (media/10);
	}
	printf("ALTURAS MAIORES QUE A MEDIA \n");
	for(x=1;x<11;x++){
		//se a altura e maior que a media ela e mostrada formatada na tela do user
		if(alturas[x] > media) printf("\n Atleta %d | Altura = %.2f m\n", x, alturas[x] );
	}
}

//5- leteria
loteca(){
	int gab[13]	= {};
	int res[13] = {};
	int i, x, acertos, leia = 1, numero, a=1;
	//le o gabarito
	for(i=1;i<14;i++){
		if(i==1) printf("DIGITE O GABARITO 1-CASA | 0-EMPATE | 2-VISITANTE \n");
		printf("Partida %d: \n", i);
		scanf("%d", &gab[i]);
		if( ( gab[i] != 1 ) && (gab[i] != 0 ) && ( gab[i] != 2 ) ){
			i--;
		}
	}
	i=1;
	//executa enquanto leia for igual a um
	for(x=0;leia==1;x++){
		//na primeira volta do laco ele nao pergunta se quer ler mais um apostador
		if(i!=1){
			printf("Quer ler mais um Apostador ? \n");
			scanf("%d", &leia);
			//zera os contadores cada vez que inicia-se um novo apostador
			i=1;
			a++;//apostador = a
			acertos=0;
		}
		//se leia igual a um executa senao sai do laco e agradece a participacao (linha 1420
		if(leia==1){
			//le o cartao do apostador
			printf("APOSTADOR %d \n", a);
			printf("Digite o numero do seu cartao : \n");
			scanf("%d", &numero);
			//le a resposta
			printf("DIGITE A RESOSTA | 1-CASA | 0-EMPATE | 2-VISITANTE \n");
			for(i=1;i<14;i++){
				printf("Partida %d : \n", i);
				scanf("%d", &res[i]);
				//se o apostador digitar algo que nao seja 0, 2 ou 1 ele decrementa na variavel i (contador)
				if( ( res[i] != 1 ) && (res[i] != 0 ) && ( res[i] != 2 ) ){
					i--;
				}
				//se o user acerta incrementa na variavel acertos
				if(res[i] == gab[i]){
					acertos++;
				}
			}
			//quando sai do laco de resposta, exibe o numero do cartao e os acertos
			printf("Cartao %d | Acertos : %d \n", numero, acertos);
			acertos==13 ?printf("GANHADOR!! \n") : printf("PERDEU! \n");
		}		
	}
	printf("Obrigado por jogar na Loteca! \n");
	system("pause");	
}
