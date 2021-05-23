// Programa para determinar si el caracter es una vocal o una constante.
#include <stdio.h>
int main()
{
	char c;
	int vocal_minuscula, vocal_mayuscula;
	printf ("Introduzca una letra: ");
	scanf ("%c", &c);

	// Evalua si la variable c es una vocal minuscula.
	vocal_minuscula = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

	// Evalua si la variable c es una vocal mayuscula.
	vocal_mayuscula = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

	// Evalua si c es una vocal.
	if (vocal_minuscula || vocal_mayuscula)
		printf ("%c es una vocal.\n", c);
	else
		printf ("%c es una consonante. \n", c);
	return 0;
}
 
