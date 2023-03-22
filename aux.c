#include "main.h"
/**
 * in_array - Check if an element exist in array.
 *
 * @arr: The array to check.
 * @element: Element to find.
 * @len: Lenght of the array.
 *
 * Return: 1 if element is in the array, 0 otherwise.
 */
int in_array(int arr[], int element, int len)
{
	int i = 0;

	for (i = 0; i < len; i++)
	{
		if (arr[i] == element)
			return 1;
	}
	return 0;
}
