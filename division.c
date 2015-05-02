#include <stdio.h>
void division(float a, float b)
{
	printf("division: \n");
do{
	printf("ingrese el numerador: \n");
	scanf("%f", &a);
	printf("ingrese el denominador != 0 : \n");
	scanf("%f", &b);
}while(b==0)

	printf("la division es: %f", a/b);
}