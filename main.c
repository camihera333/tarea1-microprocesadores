#include <stdio.h>
#include "calculadora.h"


int main (void)
{
int i,a,b;
printf("digite la operaci�n que desea realizar:/n 1.suma /n2.resta /n3.multiplicaci�n /n4.divisi�n);
scanf("%d",&i);

switch (i):

{
		printf("ingrese los numeros);
		scanf("%d",&a);
		scanf("%d",&b);
	case 1:
		{
		r=suma(a,b);
		break;
		}
	case 2:
		{
		r=resta(a,b);
		break;
		}
	case 3:
		{
		r=multiplicacion(a,b);
		break;
		}
	case 4:
		{
		r=division(a,b);
		break;
		}

}
printf("el resultado de la operaci�n es: %d",r);
return 0;
}





