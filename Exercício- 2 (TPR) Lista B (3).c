#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int numero;

main()
{
	printf("por favor entre com o primeiro numero: ");
	scanf("%d",&numero);
	if (numero%2==1){
		printf("O numero %d e um numero primo. ",numero);
	}
	else {
		printf("O numero %d nao e um numero primo. ",numero);
	}
	if (numero<0){
		printf("O numero %d e um numero negativo. ",numero);
	}
	else {
		printf("O numero %d e um numero positivo. ",numero);
	}
return 0;
system("PAUSE");
}
