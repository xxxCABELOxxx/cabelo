#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main ()

{ 
 	int n1,n2,n3,n4,soma;
 	
printf ("De quatro numeros: ");

printf("Digite o 1� Numero\n: ");
scanf("%d", &n1); 

printf("Digite o 2� Numero\n: ");
scanf("%d", &n2);

printf("Digite o 3� Numero\n: ");
scanf("%d", &n3);

printf("Digite o 4� Numero\n: ");
scanf("%d", &n4);

	if ( n1>n2 && n1>n3 && n1>n4)
	soma=n2+n3+n4;
	
	if ( n2>n1 && n2>n3 && n2>n4)
	soma=n1+n3+n4;
	
	if ( n3>n1 && n3>n2 && n3>n4)
	soma=n1+n2+n4;
	
	if ( n4>n1 && n4>n2 && n4>n3)
	soma=n1+n2+n3;
	
	printf("A soma dos tres menores numeros sao %d\n: ", soma);
	
	
	system("pause");
	return 0;
	

}
