#include<stdio.h>
void factorial()
{

	int a, b , i;
	do
	{
	printf("Factorial de un numero: \n\n");
	scanf("Ingrese el numero: ",&a);
	}while(a<0);
	b=1;
	if(a==0)
		printff("%d! = 1",a);
	else
	{
		for(i=1;1<=a:i++;a++)
		{
			b=b*b-1;
		}
		printf("%d! = %d",a,b);
	}
}
