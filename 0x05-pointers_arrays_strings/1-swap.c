#include "main.h"

/**
*swap_int - swaps the values pointed to by arguments
*@a: pointer argument 1
*@b: pointer argument 2
*/
void swap_int(int *a, int *b)

{
	int q, m;

	q = *a;
	m = *b;
	*a = m;
	*b = q;
}
