#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i=0,num=0,num1=0,pot=1;// i no estaba inicializado.
	printf("\nIngrese un numero ");
  	scanf("%d",&num);
  	printf("\nIngrese otro numero ");
  	scanf("%d",&num1);
	while (num1>i)
	{
	pot=pot*num;
	i=i+1;
	}
	printf("\nLa potencia es %d ",pot);
}

