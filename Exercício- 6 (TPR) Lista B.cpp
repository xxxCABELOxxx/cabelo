#include <stdio.h>
#include <stdlib.h>
main (void)

{
	char* nome,endereco;
	int numero;
	printf("escreva seu nome: ");
	scanf("%s", nome);
	printf("escreva seu endere�o: ");
	scanf("%s", endereco);	
	printf("digite seu telefone: ");
	scanf("%d", &numero);
	printf("nome: %s\n",nome);
	printf("endere�o: %s\n",endereco);
	printf("telefone: %d\n",numero);
	system("pause");
	return 0;
}
