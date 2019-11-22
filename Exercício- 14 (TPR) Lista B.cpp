#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main (void)
{
	float n1,desconto,total;
	printf("digite valor do produto: ");
	scanf("%f",&n1);
    desconto = (n1 * 0.20);
    total = (n1 - desconto);
	printf("com desconto de 20 porcento o valor do produto agora = %f\n",total);
	printf("o valor do desconto = %f\n",desconto);
	system("pause");
	return 0;
}
