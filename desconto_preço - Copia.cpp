#include <stdio.h>
#include <stdlib.h>

int main() {
	char nome[20];
	float preco, desconto, valorfinal;
	
	printf("\nDigite o  nome do produto: ");
	fgets (nome, 20, stdin);
	printf("\nDigite o preco do produto: ");
	scanf("%f", &preco);
	
	desconto = 0.15 * preco;
	valorfinal = preco - desconto;
	
	printf("Nome do produto: %s", nome);
	printf("\nO valor do produto com desconto e: %f", valorfinal);
	
	return 0 ;
}
