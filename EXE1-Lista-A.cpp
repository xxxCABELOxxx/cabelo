#include <stdio.h>
#include <stdlib.h>

 main(void)
{
	char nome[255];
	printf("Digite seu nome: \n");
	scanf("%s", &nome);
	printf("\n%s", nome);
	system("pause"); 
	return 0;
}
