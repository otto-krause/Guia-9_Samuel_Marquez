#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int sal=0,np=0,nn=0,i=0;
	while(20>i){
		printf("Ingrese su salario ");
		scanf("%d",&sal);
					if (sal>20000){
						np=np+1;
						} 	else  {
								nn=nn+1;				
							} 
		i=i+1;
		}
		printf("\n El numero total de personas que ganan mas de esta suma es %d ",np);
		printf("\n El numero total de personas que ganan menos de esta suma es %d ",nn);
	return 0;
}

