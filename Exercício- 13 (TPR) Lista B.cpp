#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main (void)
{
	float n1,n2,peri,area;
	printf("digite altura do retangulo: ");
	scanf("%f",&n1);
	printf("digite largura do retangulo: ");
	scanf("%f",&n2);
	peri = n1 + n2;
	area = n1 * n2;
	printf("o perimetro = %f\na area = %f\n",peri,area);
	system("pause");
	return 0;
}
