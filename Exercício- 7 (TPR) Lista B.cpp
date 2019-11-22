#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main (void)
{
	int n1,n2,sub;
	printf("entre com primeiro numero: ");
	scanf("%d", &n1);
	printf("entre com segundo numero: ");
	scanf("%d", &n2);
	sub = n1-n2;
	printf("resultado: %d\n", sub);
	system("pause");
	return 0;
}
