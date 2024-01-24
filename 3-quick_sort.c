#include <stdio.h>
#include "sort.h"
/**
 * partition - ...
 * @arr: ...
 * @low: ...
 * @high: ...
 * @size: ...
 * Return: ...
*/
int partition(int *arr, int low, int high, size_t size)
{
	int j, temp;
	int pivot = arr[high];
	int i = low - 1;

	for (j = low; j < high; j++)
	{
		if (arr[j] <= pivot)
		{
			i = i + 1;
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}
	temp = arr[i + 1];
	arr[i + 1] = arr[high];
	arr[high] = temp;
	print_array(arr, size);
	return (i);
}
/**
 * _sort - ...
 * @array: ...
 * @lo: ...
 * @hi: ...
 * @size: ...
 * Return: ...
*/
void _sort(int *array, int lo, int hi, size_t size)
{
	if (lo < hi)
	{
		int pi = partition(array, lo, hi, size);

		_sort(array, lo, pi - 1, size);
		_sort(array, pi + 1, hi, size);
	}
}
/**
 * quick_sort - ...
 * @array: ...
 * @size: ...
 * Return: ...
*/
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
	{
		return;
	}
	_sort(array, 0, size - 1, size);
}
