#include "function_pointers.h"

/**
* array_iterator - void function name
* @array: entered array
* @size: number of array elements
* @action: function pointer
*/
void array_iterator(int *array, size_t size, void(*action)(int))
{
	for (int i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
