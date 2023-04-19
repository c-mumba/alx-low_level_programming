 #include "function_pointers.h"

/**
 * array_iterator - Short description, single line
 * @array: Description of parameter x
(* @size: Description of parameter x
 * @action: Description of parameter x
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: Description of the returned value
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !size || !action)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
