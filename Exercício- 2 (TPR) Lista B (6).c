#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int x,x2,y,y2;
float distancia;
main()
{
	printf("Por favor insira a cordenada do x do primeiro ponto: ");
	scanf("%d",&x);
	
	printf("Por favor insira a cordenada do y do primeiro ponto: ");
	scanf("%d",&y);
	
	printf("Por favor insira a cordenada do x do segundo ponto: ");
	scanf("%d",&x2);
	
	printf("Por favor insira a cordenada do y do segundo ponto: ");
	scanf("%d",&y2);
	distancia=sqrt((pow(x2-x,2))+(pow(y2-y,1)));
	printf("A distancia correspondente entre (%d,%d) e (%d,%d equivale a %f",x,y,x2,y2,distancia);
			return 0;
			system ("PAUSE");
		
		
}
