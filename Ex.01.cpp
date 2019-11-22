#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()

{
 int n1,n2,n3,soma,media,produto;


printf("Digite o 1º Numero\n: ");
scanf("%d",&n1);
printf("Digite o 2º Numero\n: ");
scanf("%d",&n2);
printf("Digite o 3º Numero\n: ");
scanf("%d",&n3);

soma=n1+n2+n3;
media=soma/3;
produto=n1*n2*n3;

printf("A soma dos 3 Numeros sao: %d \n", soma );

printf("Sua média e:%d \n", media);

printf("O produto e:%d \n", produto );

system("pause");
return 0;

}
