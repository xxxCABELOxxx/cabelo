#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()

{
 int n1,n2,n3,soma,media,produto;


printf("Digite o 1� Numero\n: ");
scanf("%d",&n1);
printf("Digite o 2� Numero\n: ");
scanf("%d",&n2);
printf("Digite o 3� Numero\n: ");
scanf("%d",&n3);

soma=n1+n2+n3;
media=soma/3;
produto=n1*n2*n3;

printf("A soma dos 3 Numeros sao: %d \n", soma );

printf("Sua m�dia e:%d \n", media);

printf("O produto e:%d \n", produto );

system("pause");
return 0;

}
