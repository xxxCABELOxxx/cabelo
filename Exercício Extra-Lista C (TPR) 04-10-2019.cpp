#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<locale.h>
int main()
{ 
int prim,segu,terc,quar,quin,num,resto,inversao;
	setlocale(LC_ALL, "Portuguese_Brazil");
		printf("Digite um número de 5 algarismos: ");
			scanf("%d",&num);
	 
				prim=num/10000;
				resto=num%10000;
				segu=resto/1000;
				resto=resto%1000;
				terc=resto/100;
				resto=resto%100;
				quar=resto/10;
				quin=resto%10;
			inversao=prim+(segu*10)+(terc*100)+(quar*1000)+(quin*10000);
		if (num==inversao){
		printf("O Número %d é palíndromo\n",num);
		}
	else {
	printf("O número %d não é palíndromo\n",num);
	}
return 0;
}
