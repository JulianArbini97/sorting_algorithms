#include "sort.h"
/**
 * bubble_sort - bubble sort algorithm
 * @array: array
 * @size: size of array
 * Return: sorted array
 */
void bubble_sort(int *array, size_t size)
{
size_t i, j;
int tmp;

for (j = 0; j < size; j++)
{
for (i = 0; i < size - 1; i++)
{
if (array[i] > array[i + 1])
{
tmp = array[i];
array[i] = array[i + 1];
array[i + 1] = tmp;
print_array(array, size);
}
}
}
}
