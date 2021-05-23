#include <stdio.h>
int factorial(int n)
{
	int i = 1;
	while(n>1)
	{
		i = i * n;
		n = n - 1; // Aqui hay una declaracion multiple de la variable n, por lo que no muestra el resultado.
	}
	return i; // Ahora mostrara la respuesta correcta.
}
int main(int argc, char * arvg [])
{
	int fac4 = factorial(4);
	int fac5 = factorial(5);
	printf ("4! = %d, 5! = %d\n", fac4, fac5);
}

