#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float lado,lado2,lado3;

main()
{
	printf("Por favor insira o primeiro lado do triangulo: ");
	scanf("%f",&lado);
	printf("Por favor insira o segundo lado do triangulo: ");
	scanf("%f",&lado2);
	printf("Por favor insira o terceiro lado do triangulo: ");
	scanf("%f",&lado3);
	
	if (lado>0 && lado2 >0 && lado3>0){
		if (lado==lado2 && lado2==lado3 && lado3==lado){
			printf("\n Este triangulo corresponde a um equilatero.");
			}
		if (lado!=lado2 && lado2!=lado3 && lado3!=lado){
			printf("\n esse triangulo corresponde a um escaleno.");
		} else {
			printf("\n esse triangulo corresponde a um isosceles.");
		}
	}
	else{
			printf("\n essas medidas nao formam um retangulo.");
	}
}
