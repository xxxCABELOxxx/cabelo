#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main (void)
{
	float n,div;
	printf("digite um numero: ");
	scanf("%f" ,&n);
	div = n / 4;
	printf("1/4 de %f= %f\n",n,div);
	system("pause");
	return 0;
}
