#include <stdio.h>

int main() {
	int fruta;
	
	printf("\nQual fruta foi comprada: ");
	scanf("%d", &fruta);
	
	switch (fruta){
		case 1:
			printf("A fruta comprada foi abacaxi.");
			break;
		case 2:
			printf("A fruta comprada foi maça.");
			break;	
		case 3:
			printf("A fruta comprada foi pera.");
			break;
		default: printf("A fruta comprada e diferente de abacaxi, maca e pera.");
		}
	
	return 0;
}
