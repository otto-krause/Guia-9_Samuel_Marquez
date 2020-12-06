#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i=0,num=0,num1=0,a=0;
		printf("\nIngrese un numero ");
  	scanf("%d",&num);
  		printf("\nIngrese un numero ");
  	scanf("%d",&num1);
  	if (num>num1)
  	{
  			while((num-1)>num1)
  				{
  				num1=num1+1;
  				printf("\n %d",num1);
  				}
	  }
	  else{
	  	  			while((num1-1)>num)
  				{
  				num=num+1;
  				printf("\n %d",num);
  				}
	  }
	
	return 0;
}

