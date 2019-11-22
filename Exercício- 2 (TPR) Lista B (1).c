#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float litros,latas,custo,altura,raio,area;

main()
{
	printf("Por favor digite o raio do cilindro (metros): ");
	scanf("%f",&raio);
	printf("Agora digite a altura do cilindro (metros): ");
	scanf("%f",&altura);
	area= 3.14*pow(raio,2)+2*3.14*raio*altura;
	printf("\n O volume do cilindro corresponde a %f.",area);
	litros= area/3;
	latas= litros/5;
	printf("\n Vai ser usado %f litros de tinta, que corresponde a %f latas. ",litros,latas);
	custo= 20*latas;
	printf("\n O preço total da pintura corresponde a %f",custo);
	return 0;
	system("PAUSE");
}
