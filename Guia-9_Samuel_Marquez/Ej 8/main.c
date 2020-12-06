#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num=0,np=0,nn=0,cer=0,i=0;
	while(10>i){
		printf("Ingrese un numero ");
		scanf("%d",&num);
					if (num>0){
						np=np+1;
						} 	else if(num<0) {
								nn=nn+1;				
							} else {
								cer=cer+1;	
							}
		i=i+1;
		}
		printf("\n El numero total de numeros positivos es %d ",np);
		printf("\n El numero total de numeros negativos es %d ",nn);
		printf("\n El numero total de ceros es %d ",cer);
	return 0;
}
