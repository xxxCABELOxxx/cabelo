#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int num;

main()
{
	printf(" Esta errado fazer if (num=10) pois tem que colocar o operador de relacao ==.");
	num=1;
	if (num=10){
		printf("\n \n Ele ira aceitar a condicao do if como certa independente do valor da variavel.");
	}
	else {
		printf("\n ???");
	}
return 0;
system("PAUSE");
}
