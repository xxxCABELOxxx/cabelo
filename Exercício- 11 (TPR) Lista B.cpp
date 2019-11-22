#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main (void)
{
	float n1,quad;
	printf("digite um numero: ");
	scanf("%f",&n1);
    quad = pow(n1,2);
	printf("o quadrado de %f = %f",n1,quad);
	system("pause");
	return 0;
}
