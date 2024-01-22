#include "sort.h"
/**
 * bubble_sort - compare every number with all
 * @array: array of numbers
 * @size: size of array
 * Return: ...
*/
void bubble_sort(int *array, size_t size)
{
	int j, i;

	while (j < size - 1)
	{
	while (i < size - j - 1)
	{
	if (array[i] > array[i + 1])
	{
	int temp;

	temp = array[i];
	array[i] = array[i + 1];
	array[i + 1] = temp;
	print_array(array, size);
	}
	i++;
	}
	j++;
	}

