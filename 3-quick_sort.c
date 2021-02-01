#include "sort.h"

/**
 * myswap - swaps two values
 *
 * @array: data sort input
 * @swap1: first
 * @swap2: second
 * @size: size
 *
 * Return: No Return
 */

void myswap(int *array, int swap1, int swap2, int size)
{
	int temp;

	if (array[swap1] != array[swap2])
	{
		temp = array[swap1];
		array[swap1] = array[swap2];
		array[swap2] = temp;
		print_array(array, size);
	}
}

/**
 * part - part to a pivot
 *
 * @array: data sort input
 * @first: first
 * @second: second
 * @size: size input
 *
 * Return: New position
 */

int part(int *array, int first, int second, size_t size)
{
int pos = first;
int counter;
int pivot = array[second];

	for (counter = first; counter <= second; counter++)
	{
		if (array[counter] < pivot)
		{
			myswap(array, pos, counter, size);
			pos++;
		}
	}
	myswap(array, pos, second, size);

	return (pos);
}

/**
 * myquicksort -  quick sort algorithm
 *
 * @array: data to sort
 * @first: first
 * @second: second
 * @size: size input
 * Return: No Return
 */

void myquicksort(int *array, int first, int second, size_t size)
{
	int pivot;

	if (first < second)
	{
		pivot = part(array, first, second, size);
		myquicksort(array, first, pivot - 1, size);
		myquicksort(array, pivot + 1, second, size);
	}
}

/**
 * quick_sort -  quick sort algorithm
 *
 * @array: sort data
 * @size: size input
 *
 * Return: No Return
 */

void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;

	myquicksort(array, 0, size - 1, size);
}
