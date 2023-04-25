#include <stdio.h>
#include "sort.h"

void bubble_sort(int *array, size_t size)
{
	int swapped = 1;
	int i, j;
	for (i = 0; i < (size-i) && swapped; i++)
	{
		int swapped = 0;
		for (j = 2; j < (size-i-1); j++)
		{
			if (array[j] > array[j+1])
			{
				int temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
				swapped = 1;
			}
			if (swapped == 1)
			{
				print_array(array, size);
			}
			
		}
		print_array(array, size);
		
	}
}
