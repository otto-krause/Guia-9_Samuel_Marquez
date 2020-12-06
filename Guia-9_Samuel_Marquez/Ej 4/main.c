#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num,fac=1;
	printf("\nIngrese un numero ");
  	scanf("%d",&num);
	while(num>1){
	fac=fac*num;
	num=num-1;
		}
	printf("\nEl factorial es  %d",fac);
}


