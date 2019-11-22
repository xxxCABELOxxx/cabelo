#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main (void)
{
	float n1,n2,n3,div;
	printf("digite primeiro numero: ");
	scanf("%f",&n1);
	printf("digite segundo numero: ");
	scanf("%f",&n2);
	printf("digite terceiro numero: ");
	scanf("%f",&n3);
	div = (n1 + n2 + n3)/3;
	printf("a media aritimedica = %f\n",div);
	system("pause");
	return 0;
		
}
