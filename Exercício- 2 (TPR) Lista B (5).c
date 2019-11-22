#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float altura,pesobom;
char sexo [1];

main()
{
	printf("Por favor digite o valor equivalente a sua altura: ");
	scanf("%f",&altura);
	pesobom= (72.7*altura)-58;
	printf("O seu peso ideal seria de %f",pesobom);
	return 0;
	system ("PAUSE");
}
