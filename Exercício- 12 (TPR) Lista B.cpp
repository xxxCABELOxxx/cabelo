#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main (void)
{
	float n1,reajuste;
	printf("digite seu saldo: ");
	scanf("%f",&n1);
    reajuste = (n1 * 0.02) + n1;
	printf("com reajuste de 2% seu saldo agora = %f",reajuste);
	system("pause");
	return 0;
}
