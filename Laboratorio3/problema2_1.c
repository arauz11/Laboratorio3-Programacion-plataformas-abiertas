// Codigo modificado, en el que el usuario puede ingresar el numero del factorial que busca.

#include <stdio.h>
int factorial(int n)
{
	int i = 1;
	while(n>1)
	{
		i = i * n;
		n = n - 1;
	}
	return i;
}
int main(int argc, char * arvg[])
{
	int num;
	printf ("Ingrese el numero factorial que desea: ");
	scanf ("%d", &num); // El usuario ingresa el numero.
	printf ("El factorial de %d es:  %d \n", num, factorial(num)); // La funcion correspondiente.
	return 0;
}

