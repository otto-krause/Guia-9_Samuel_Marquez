#include <stdio.h>
#include <stdlib.h>

int main()
{
	int z=0,i=1,acu=0,vent,proc,vt,mj,mvp;

	while(21>i){
		while (15>z){
			printf("\nIngrese las ventas del vendedor %d ",i);
			scanf("%d",&vent);
			acu=acu+vent;
			z=z+1;
			}
		printf("\n Vendio un total de %d unidades ",acu);
					if (acu>mj){
							mj=acu;
							mvp=i;
								}
		vt=vt+acu;
		z=0;
		acu=0;
		i=i+1;
		}

	printf("\n El total de ventas es %d",vt);
	printf("\n El mejor vendedor fue el vendedor numero %d con un total de %d ventas ",mvp,mj);

}
