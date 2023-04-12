/*Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor 
sempre será a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), 
escreva um programa na linguagem que desejar onde, informado um número, ele calcule a sequência 
de Fibonacci e retorne uma mensagem avisando se o número informado pertence ou não a sequência.

IMPORTANTE:

Esse número pode ser informado através de qualquer entrada de sua preferência ou pode ser previamente definido no código;*/

#include<stdio.h>
#include<stdlib.h>

#define TAM 10

void VerificaSeq(int V[]){
	int Entrada, Count=0;
	printf("Digite o valor desejado:\n");
	scanf("%d", &Entrada);
	while(Count < TAM){
		printf("EU estou aqui %d \n", V[Count]);
		if(Entrada == V[Count]){
			printf("O valor %d pertence a sequencia", Entrada);
			break;
		}
		if(Entrada != V[Count]){
			if(Count+1 == TAM)
				printf("O valor %d nao pertence a sequencia", Entrada);
		}
		Count++;
	}
}

int main (){
	int V[TAM]={0, 1, 1, 2, 3, 5, 8, 13, 21, 34};
	VerificaSeq(V);
}
