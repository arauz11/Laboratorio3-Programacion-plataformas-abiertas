// C Programa para encontrar los primeros 100 numeros triangulares.

#include <stdio.h>

// La funcion para encontrar el numero triangular.

void triangular_series(int n)
{
	int i, j = 1, k = 1;

	// Para cada iteracion incrementa j por 1 y lo agrega a k

	for (i = 1; i <= n; i++) {
		printf(" %d ", k);
		j = j +1; // Incrementando j por 1
		k = k + j; // Agrega el valor de j en k y actuliza k

	}
}

// Programa que corre la funcion 
int main()
{
	int n = 100;
	triangular_series(n);
	return 0;
}

