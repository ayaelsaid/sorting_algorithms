#include <stdio.h>
#include "sort.h"
void selection_sort(int *array, size_t size)
{
    int i, j;

    for (j = 0; j < size - 1; j++)
    {
        int k = j;

        for (i = j + 1; i < size; i++)
        {
            if (array[k] >  array[i])
            {
                k = i;

            }
        }
        if (k != j)
        {
        int temp = array[j];

        array[j] = array[k];;
        array[k] = temp;
        print_array(array, size);
        } 
    }
}
