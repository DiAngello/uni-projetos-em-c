#include <stdio.h>
#include <stdlib.h>

int main() {
	int num1, num2, num3;
	
	printf("\nDigite o primeiro numero: ");
	scanf("%d", &num1);
	printf("\nDigite o segundo numero: ");
	scanf("%d", &num2);
	printf("\nDigite o terceiro numero: ");
	scanf("%d", &num3);
	
	if (num1 > num2) {
		if (num2 > num3){
			printf("\nO maior numero e: %d", num1);
			printf("\nO menor numero e: %d", num3);	
		}
		else {
			printf("\nO maior numero e: %d", num1);
			printf("\nO menor numero e: %d", num2);	
		}
	}
	
	if(num2>num3) {
		if (num3>num1){
			printf("\nO maior numero e: %d", num2);
			printf("\nO menor numero e: %d", num1);
		}
		else {
			printf("\nO maior numero e: %d", num2);
			printf("\nO menor numero e: %d", num3);	
		}
		}
	if(num3>num1){
		if (num1>num2){
			printf("\nO maior numero e: %d", num3);
			printf("\nO menor numero e: %d", num2);	
		}
		else{
			printf("\nO maior numero e: %d", num3);
			printf("\nO menor numero e: %d", num1);
		}
	}
return 0; 
}
