#include <stdio.h>

int main() {
    float  num1, num2, num3, media;
    
    printf("\nDigite o primeiro numero: ");
	scanf("%f", &num1);
	printf("\nDigite o segundo numero: ");
	scanf("%f", &num2);
	printf("\nDigite o terceiro numero: ");
	scanf("%f", &num3);
	
	media = (num1 + num2 + num3)/3;
	
	printf("\nA media artitmetica dos numero e: %f", media); 
	
return 0;
}
