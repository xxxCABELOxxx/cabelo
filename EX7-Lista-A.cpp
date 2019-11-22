#include <stdio.h>
#include <stdlib.h>
main (void)
{
	int x,ant,suc;
	printf("digite um numero: ");
	scanf("%d", &x);
	ant = (x-1);
	suc = (x+2);
	
	printf("o antecessor = %d\n", ant);
	printf("o sucessor = %d\n", suc);
	
	system("pause");
	return 0;	
}

