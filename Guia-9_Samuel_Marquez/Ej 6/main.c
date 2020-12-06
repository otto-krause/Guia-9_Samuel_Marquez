#include <stdio.h>
#include <stdlib.h>

int main()
{
	int z=0,i=1,acu=0,nota,proc;
	float pc=0,pro;
	while(31>i){
		while (10>z){
			printf("\nIngrese el promedio del alumno %d ",i);
			scanf("%d",&nota);
			acu=acu+nota;
			
			z=z+1;
			}
		pro=acu/10;
		printf("\n El promedio del alumno es %f",pro);
		proc=proc+pro;
		acu=0;
		pro=0;
		z=0;
		i=i+1;
		}
		pc=proc/30;
	printf("\n El promedio del curso es %f",pc);
	
}

