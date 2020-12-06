#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()//int main(int argc, char *argv[]) La función int no debe llevar argumentos.
{
	int i=0,ng=0,acu=0,num=0;
	float pro=0;
	while (5>=i)
	{
		printf("\n Ingrese un numero ");
		scanf("%d",&num);
		acu=acu+num;
		if(num>ng){
			ng=num;
		}
		i=i+1;
	}
	pro=acu/5;
	printf("\n El numero promedio es %.2f",pro);//.2 limitala cantidad de decimales que se muestran en una variable de tipo float.
	printf("\n El numero mas grande es %d",ng);
	return 0;
}
