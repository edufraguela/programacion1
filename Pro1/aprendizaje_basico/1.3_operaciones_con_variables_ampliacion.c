#include <stdio.h>
#include <math.h>


int main(){
	int x,y;

	x = 10;
	y = 2;

	//Operaciones basicas 

	x = x + y;
	printf ("El valor de x + y es: %i \n",x);

	x = x - y;
	printf ("El valor de x - y es: %i \n",x);

	x = x * y;
	printf ("El valor de x * y es: %i \n",x);

	x = x / y;
	printf ("El valor de x / y es: %i \n",x);

	x = x % y;
	printf ("El valor de x resto y es: %i \n",x);

	/*x = sqrt (x);
	printf ("El valor de la raiz cuadrada de x es: %i \n",x);*/

	/*x = pow(y,x);
	printf("El valor de y elebado a x es: %i\n",x);*/

	//Operadores de incremento

	x++; /*Muestra un valor + que el de x*/
	printf ("EL valor de x++: %i \n",x);

	x--; /*Muestra un valor - que el de x*/
	printf ("EL valor de x--: %i \n",x);

	return 0;


}