void ler(int op){
	char x[50];
	printf("DIGITE A MENSAGEM A SER CRIPTOGRAFADA:\n\n");
	fflush(stdin);
	gets(x);
	if(op==1){
		crip(x);
	}else{
		desc(x);
	}
}
crip(char x[50]){
	int y, i, j;
	printf("DIGITE A CHAVE NUMERICA INTEIRA PARA CRIPTOGRAFAR:\n");
	scanf("%d", &y);
	strupr(x);
	for(i=0;x[i]!='\0';i++){
		for(j=0;j<y;j++){
			if(x[i] >= 90){
				x[i] = 65;
			}else{
				x[i]++;	
			}
		}	
	}
	printf("\nMENSAGEM\n");
	puts(x);
	system("pause");
}
desc(char x[50]){
	int y, i, j;
	printf("DIGITE A CHAVE NUMERICA INTEIRA PARA DESCRIPTOGRAFAR:\n");
	scanf("%d", &y);
	strupr(x);
	for(i=0;x[i]!='\0';i++){
		for(j=0;j<y;j++){
			if(x[i] <= 65){
				x[i] = 90;
			}else{
				x[i]--;	
			}
		}	
	}
	printf("\nMENSAGEM\n");
	puts(x);
	system("pause");
}
ascii(){
	int i;
	char j;
	printf("Maiusculas\n");
	for(i=65;i<=90;i++){
		j=i;
		printf("%d - %c\n",i, j);		
	}
	printf("minusculas\n");
	for(i=97;i<=122;i++){
		j=i;
		printf("%d - %c\n",i, j);		
	}
	system("pause");
}
