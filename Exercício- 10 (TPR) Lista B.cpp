#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main (void)
{
	float n1,n2,soma,sub,div,mult;
	printf("digite primeiro numero: ");
	scanf("%f",&n1);
		printf("digite segundo numero: ");
	scanf("%f",&n2);
	soma = n1 + n2;
	sub = n1 - n2;
	div = n1 / n2;
	mult = n1 * n2;
	printf("a soma = %f\na subtraçao = %f\na divisao = %f\na multiplicaçao = %f",soma,sub,div,mult);
	system("pause");
	return 0;
}
