#include <stdio.h>
#include <stdlib.h>

void calculaPosicaoVetor(int posicaoDesejada){
   int vet[5] = {1, 2, 3, 4, 5};
   // o vetor armazena a posicao inicial do vetor na memoria
   // (int) antes da operacao transforma o resultado em inteiro
   int posInicial = (int)&vet;
   // se for outro tipo de dado tem que mudar aqui no sizeof, ex: sizeof(float)
   int tamanhoTipo = sizeof(int);
   int posVetor = (int)&vet[posicaoDesejada];
   // posicao inicial do vetor + a posicao desejada * o tipo de dado
   int calculo = posInicial + (tamanhoTipo * posicaoDesejada);
   printf("Vetor[%d]: %d == %d \n", posicaoDesejada, posVetor, calculo);
}

void calculaPosicaoMatriz(int linhaDesejada, int colunaDesejada){
   int matriz[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
   int colunas = 3;
   // o vetor armazena a posicao inicial do vetor na memoria
   // (int) antes da operacao transforma o resultado em inteiro
   int posInicial = (int)&matriz;
   // se for outro tipo de dado tem que mudar aqui no sizeof, ex: sizeof(float)
   int tamanhoTipo = sizeof(int);
   int posMatriz = (int)&matriz[linhaDesejada][colunaDesejada];
   // parecido com o vetor, porem adicionalmente calcula a linha desejada vezes a quantia de colunas vezes o tipo de dados
   // dessa forma, quando terminou uma linha salta para a proxima na memoria, senao pegaria sempre apenas as posicoes da primeira linha
   int calculo = posInicial + (colunaDesejada * tamanhoTipo) + (linhaDesejada*(colunas*tamanhoTipo));
   printf("Matriz[%d][%d]: %d == %d \n", linhaDesejada, colunaDesejada, posMatriz, calculo);
}

int main(){
   printf("Vetor:\n");
   int i,j;
   for(i=0;i<3;i++){
      calculaPosicaoVetor(i);
   }
   printf("\nMatriz:\n");
   for(i=0;i<3;i++){
      for(j=0;j<3;j++){
         calculaPosicaoMatriz(i, j);
      }
   }
   system("pause");    
}
