#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

main()
{

int sal,salario;
setlocale(LC_ALL, "Portuguese_Brazil");
printf("Por favor insira o seu sal�rio: ");
scanf("%d",&sal);

if (sal<301)
salario=sal*1.5;

if (sal>300)
salario=
salario=sal*1.3;

printf("O sal�rio ser� de R$ %d ",salario);

return 0;
system("pause");
}
