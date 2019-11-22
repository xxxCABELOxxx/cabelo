#include <stdio.h>
#include <stdlib.h>
 main(void)
{
	char nome[255];
	printf("Digite seu nome: \n");
	scanf("%s", &nome);
	int i;
	printf("digite sua idade: \n");
	scanf("%d" , &i );
	printf("\n%s", nome);
	printf("\n%d anos\n", i);
	system("pause"); 
	return 0;
}
